#include <stdio.h>

struct ogrencilistesi{
    int num;
    char isim[20];
    char bolum[50];
};
typedef struct ogrencilistesi liste;

FILE *ptr;

void kayitekleme(FILE *);
void kayitlisteleme(FILE *);
void kayitarama(FILE *);
void dosyalama(FILE *);

int main(void){
    
    int a=0;
    
    while(a!=5){
        printf("Yapmak istediginiz islemi seciniz\n1-Kayit Ekleme\n2-Butun Kayitlari Listeme\n3-Kayit Arama\n4-Kayitları Dosyalama\n5-Cikis\n\n");
        scanf("%d",&a);
        if(a==5)
            fclose(ptr);
        switch(a){
            case 1:
                kayitekleme(ptr);
                break;
            case 2:
                kayitlisteleme(ptr);
                break;
            case 3:
                kayitarama(ptr);
                break;
            case 4:
                dosyalama(ptr);
                break;
            
        }
    }
    return 0;
}

void kayitekleme(FILE *ptr){
    
    int a,i;
    liste list;
    
    ptr=fopen("ogrencilistesi.txt","a");
    
    printf("Kac ogrenci bilgisi gireceginizi yaziniz: ");
    scanf("%d",&a);
    
            for(i=0;i<a;i++){
                printf("%d.Yeni ogrenci numarasini girin: ",(i+1));
                scanf("%d",&list.num);
                printf("%d.Yeni ogrenci ismini girin: ",(i+1));
                scanf("%s",list.isim);
                printf("%d.Yeni ogrenci bolumunu yaziniz: ",(i+1));
                scanf("%s",list.bolum);
                
                fwrite(&list,sizeof(liste),1,ptr);
            }
    
    fclose(ptr);
}

void kayitlisteleme(FILE *ptr){
    
    liste list;
    ptr=fopen("ogrencilistesi.txt","r");
    
    fseek(ptr,0,SEEK_SET);
    printf("%-10s%-16s%10s\n","Numara","İsim","Bolum");
    while(fread(&list, sizeof(liste), 1, ptr) == 1){
        printf("%d %s %s\n",list.num,list.isim,list.bolum);
    }
    printf("\n");
    fclose(ptr);
}
                   
void kayitarama(FILE *ptr){
    
    int a=0,s=0;
    liste list;
    ptr=fopen("ogrencilistesi.txt","r+");
    printf("Aramak istediginiz ogrenci numarasini giriniz: ");
    scanf("%d",&a);
    
    fseek(ptr,0,SEEK_SET);
    while(!feof(ptr)){
        fread(&list,sizeof(liste),1,ptr);
        if(list.num==a){
            printf("Ogrenci bilgileri:\nNumarasi:%d\nAdi:%s\nBolum:%s\n\n",list.num,list.isim,list.bolum);
            break;
        }
        else
            s++;
        
    }
    printf("Eger guncelleme yapmak istiyosaniz guncelleme yapabilir ya da cikis ile cıkabilirsiniz\n");
    
    while(a!=4&&a!=5){
       
            printf("1.Ad guncelleme\n2.Numara guncelleme\n3.Bolum guncelleme\n4.Kayit silme\n5.Cikis\n\n");
            scanf("%d",&a);
            switch(a){
                case 1:
                    printf("Yeni adi giriniz:");
                    scanf("%s",list.isim);
                    fseek(ptr,s*sizeof(liste),SEEK_SET);
                    fwrite(&list,sizeof(liste),1,ptr);
                    break;
                case 2:
                    printf("Yeni numarayi giriniz:");
                    scanf("%d",&list.num);
                    fseek(ptr,s*sizeof(liste),SEEK_SET);
                    fwrite(&list,sizeof(liste),1,ptr);
                    break;
                case 3:
                    printf("Yeni bolumu giriniz:");
                    scanf("%s",list.bolum);
                    fseek(ptr,s*sizeof(liste),SEEK_SET);
                    fwrite(&list,sizeof(liste),1,ptr);
                    break;
                case 4:
                    
                    fseek(ptr,s*sizeof(liste),SEEK_SET);
                    liste list={0,"",""};
                    fwrite(&list,sizeof(liste),1,ptr);
                    printf("Silme islemi basarili!\n\n");
                    break;
            }
        }
    
    fclose(ptr);
}

void dosyalama(FILE *ptr){
    
    FILE *pt;
    ptr=fopen("ogrencilistesi.txt","r");
    pt=fopen("liste.txt","w+");
    liste list;
    
    fseek(ptr,0,SEEK_SET);
    fprintf(pt,"Numara Ad Bolum\n\n");
    while(fread(&list, sizeof(liste), 1, ptr) == 1){
        fprintf(pt,"%d %s %s\n",list.num,list.isim,list.bolum);
    }
    fclose(ptr);
    fclose(pt);
}
