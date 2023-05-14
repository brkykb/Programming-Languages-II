#include <stdio.h>
#include <stdlib.h>

struct ogrenciprogrami{
    
    int num;
    char ad[15];
    int vize;
    int final;
    struct ogrenciprogrami *next;
};
typedef struct ogrenciprogrami program;

program *next=NULL;
program *head;

void kayitekle(void);
void kayitlisteleme(void);
void kayitguncelleme(void);
void orthesapla(void);
void eniyiogrenci(void);

int ogrencisayisi=0;
int main(void){
    
    printf("**Ogrenci Kayit Programi**\n");
    
    int a;
    do{
    printf("\n1-Yeni Kayit Ekleme\n2-Kayit Listeleme\n3-Kayit Guncelleme\n4-Sinif Ortalamasi Hesaplama\n5-Ortalama Gore En Basarili Ogrenci Bilgisini Gosterme\n6-Cikis\n\n");
        scanf("%d",&a);
        
        switch(a){
            case 1:
                kayitekle();
                break;
            case 2:
                kayitlisteleme();
                break;
            case 3:
                kayitguncelleme();
                break;
            case 4:
                orthesapla();
                break;
            case 5:
                eniyiogrenci();
                break;
            case 6:
                break;
                
            default:
                printf("\nYanlis giris! Yeniden deneyin");
        }
    }while(a!=6);
    
    return 0;
}
 
void kayitekle(void){
    
    static int i=0;
    int a,n;
    static program *t = NULL;
    
    printf("Kac ogrencinin kaydini gireceksiniz: ");
    scanf("%d",&n);
    
    for(a=0;a<n;a++){                       //girilecek ogrenciler icin struct alan acar
        if(i==0){                             //ilk giris icin
            head=(program*)malloc(sizeof(program));
            t=head;
            i++;
            ogrencisayisi++;
        }
        else{                                   //sonraki girisler icin
            t->next=(program*)malloc(sizeof(program));
            t=t->next;
            ogrencisayisi++;
        }
        printf("%d.Ogrencinin numarasini girin: ",a+1);
        scanf("%d",&t->num);
        
        printf("%d.Ogrencinin adini girin: ",a+1);
        scanf("%s",t->ad);
        
        printf("%d.Ogrencinin vize notunu girin: ",a+1);
        scanf("%d",&t->vize);
        
        printf("%d.Ogrencini final notunu girin: ",a+1);
        scanf("%d",&t->final);
    }
    t->next=NULL;
}
void kayitlisteleme(void){
    program *p;                     //sonradan guncellenecek suanlık sadece yazdırıyor
    p=head;
    int i=1;
    while(p!=NULL){
        printf("\n%d.Ogrencinin Numarasi: %d\n%d.Ogrencinin Adi: %s\n%d.Ogrencinin Vize Notu: %d\n%d.Ogrencinin Final Notu: %d\n\n",i,p->num,i,p->ad,i,p->vize,i,p->final);
        p=p->next;
    }
}
void kayitguncelleme(void){
    
    program *p;
    int a,b;
    
    p=head;
    
    printf("\nKaydini guncellemek istediginiz ogrencinin numarasini giriniz: ");
    scanf("%d",&a);
    
    while(p!=NULL){
        if(a==p->num){
            printf("\nİstediginiz Ogrencinin Guncel Bilgileri\n");
            printf("Ogrencinin Numarasi: %d\nOgrencinin Adi: %s\nOgrencinin Vize Notu: %d\nOgrencinin Final Notu: %d\n",p->num,p->ad,p->vize,p->final);
            do{
                printf("\nDegistirmek istediginiz bilgi varsa seciniz\n1-Ogrenci Numarasi\n2-Ogrenci Adi\n3-Ogrenci Vize notu\n4-Ogrenci Final Notu\n5-Cikis\n\n");
                scanf("%d",&b);
                switch(b){                  //degistirilecek ogrencinin bilgilerini alan kisim
                    case 1:
                        printf("Yeni Ogrenci Numarasini Giriniz: ");
                        scanf("%d",&p->num);
                        printf("Basariyla Degistirildi\n");
                        break;
                    case 2:
                        printf("Yeni Ogrenci Adini Giriniz: ");
                        scanf("%s",p->ad);
                        printf("Basariyla Degistirildi\n");
                        break;
                    case 3:
                        printf("Yeni Ogrenci Vize Notunu Giriniz: ");
                        scanf("%d",&p->vize);
                        printf("Basariyla Degistirildi\n");
                        break;
                    case 4:
                        printf("Yeni Ogrenci Final Notunu Giriniz: ");
                        scanf("%d",&p->final);
                        printf("Basariyla Degistirildi\n");
                        break;
                }
            }while(b!=5);
        }
        p=p->next;
    }
}
void orthesapla(void){
    
    float ort,toplam=0,kisi=0;
    
    program *p;
    p=head;
    
    while(p!=NULL){
        ort=(p->vize+p->final)/2;               //tek tek ort hesaplama
        kisi++;
        p=p->next;
        toplam+=ort;
    }
    ort=toplam/kisi;                            //genel ortalam hesaplama
    printf("Genel Ortalam: %f",ort);
}
void eniyiogrenci(void){
    
    float ort,eniyi=0;
    program *p,*r;
    p=head;
    r=NULL;
    
    while(p!=NULL){
        ort=(p->vize+p->final)/2;
        if(ort>=eniyi){
            eniyi=ort;                      //en iyi ortalamayi deneyerek bulma
            r=p;
        }
        p=p->next;
    }
    printf("En İyi Ogrenci Bilgileri\n\n");
    printf("Numarasi: %d\n",r->num);
    printf("Adi: %s\n",r->ad);
    printf("Vize Notu: %d\n",r->vize);
    printf("Final Notu: %d\n",r->final);
    printf("Ortalamasi: %f\n",eniyi);
}

