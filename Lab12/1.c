#include <stdio.h>

struct ogrenciliste{
    
    int number;
    char ad[20];
    float mid;
    float final;
    float ort;
};
typedef struct ogrenciliste liste;
FILE *ptr;

void dosya(void);
void kayitekleme(void);
void kayitlisteleme(void);
void kayitguncelleme(void);
void orthesapla(void);
void enbasarili(void);
void kayitsilme(void);

int main(void){
    
    int a;
    
    printf("**Ogrenci Sistemi Programi**\n\n\n");
    
    while(1){
        printf("\n1-Yeni Kayit Ekleme\n2-Kayit Listeleme\n3-Kayit Guncelleme\n4-Sinif Ortalamasi Hesaplama\n5-Ortalama Gore En Basarili Ogrenci Bilgisini Gosterme\n6-Kayit Silme\n7-Cikis\n\n");
        scanf("%d",&a);
        
        if(a==7)
            break;
        
        switch(a){
            case 1:
                kayitekleme();
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
                enbasarili();
                break;
            case 6:
                kayitsilme();
                break;
        }
    }
    return 0;
}

void kayitekleme(void){
    
    ptr=fopen("ogrencilistesi.txt","a");
    if(ptr==NULL)
        printf("Dosya olusturulamadi");
    else{
        
        liste list;
        int a;
        printf("Kac kisi ekliyeceginizi giriniz: \n");
        scanf("%d",&a);
        
        while(a!=0){
            printf("Eklenecek ogrencinin numarasini giriniz: \n");
            scanf("%d",&list.number);
            
            printf("Eklenecek ogrencinin adini giriniz: \n");
            scanf("%s",list.ad);
            
            printf("Eklenecek ogrencinin vize notunu giriniz: \n");
            scanf("%f",&list.mid);
            
            printf("Eklenecek ogrencinin final notunu giriniz: \n");
            scanf("%f",&list.final);
            
            list.ort=(list.mid+list.final)/2;
            a--;
            fprintf(ptr,"%d %s %f %f %f\n",list.number,list.ad,list.mid,list.final,list.ort);
        }
        rewind(ptr);
        fclose(ptr);
    }
}

void kayitlisteleme(void){
    
    int a=1;
   
    ptr=fopen("ogrencilistesi.txt","r");
    liste list;
    
    while(!feof(ptr)){
        fscanf(ptr,"%d %s %f %f %f \n",&list.number,list.ad,&list.mid,&list.final,&list.ort);
        printf("%d.Ogrenci Numarasi: %d Adi: %s Vize Notu: %f Final Notu: %f Ortalamasi: %f \n",a,list.number,list.ad,list.mid,list.final,list.ort);
        a++;
    }
    rewind(ptr);
    fclose(ptr);
}

void kayitguncelleme(void){
 
    int a,b=0,c=0,d=0;
   
    ptr=fopen("ogrencilistesi.txt","r+");
    liste list;
    
    printf("Guncellemek istediginiz ogrencinin numarasini giriniz: \n");
    scanf("%d",&a);
    
    while(!feof(ptr)){
        fscanf(ptr,"%d %s %f %f %f",&list.number,list.ad,&list.mid,&list.final,&list.ort);
        if(list.number==a){
            
            rewind(ptr);
            break;
        }
        else{
            fscanf(ptr,"%d %s %f %f %f\n",&list.number,list.ad,&list.mid,&list.final,&list.ort);
            c++;
        }
    }
    while(d<c){
        fscanf(ptr,"%d %s %f %f %f \n",&list.number,list.ad,&list.mid,&list.final,&list.ort);
        d++;
    }
    while(b!=4){
        printf("Guncellemek istediginiz bilgiyi girin\n1.Adi\n2.Vize notu\n3.Final notu\n4.Cikis\n");
        scanf("%d",&b);
        switch(b){
            case 1:
                printf("Yeni adi giriniz: ");
                scanf("%s",list.ad);
                fprintf(ptr,"%d %s %f %f %f",list.number,list.ad,list.mid,list.final,list.ort);
                break;
            case 2:
                printf("Yeni vize notunu giriniz: ");
                scanf("%f",&list.mid);
                fprintf(ptr,"%d %s %f %f %f",list.number,list.ad,list.mid,list.final,list.ort);
                break;
            case 3:
                printf("Yeni final notunu giriniz: ");
                scanf("%f",&list.final);
                fprintf(ptr,"%d %s %f %f %f",list.number,list.ad,list.mid,list.final,list.ort);
                break;
        }
    }
    rewind(ptr);
    fclose(ptr);
}

void orthesapla(void){
    
    ptr=fopen("ogrencilistesi.txt","r");
    liste list;
    
    int a=0,sum=0;

    while(!feof(ptr)){
        fscanf(ptr,"%d %s %f %f %f \n",&list.number,list.ad,&list.mid,&list.final,&list.ort);
        a++;
        sum+=list.ort;
    }
    sum/=a;
    printf("Sinif ortalamasi: %d\n",sum);
    
    rewind(ptr);
    fclose(ptr);
}

void enbasarili(void){
    
    ptr=fopen("ogrencilistesi.txt","r");
    liste list;
    
    int a=0,i=0;
    while(!feof(ptr)){
        fscanf(ptr,"%d %s %f %f %f \n",&list.number,list.ad,&list.mid,&list.final,&list.ort);
        if(a<list.ort)
            a=list.ort;
    }
    rewind(ptr);
    while(!feof(ptr)){
        fscanf(ptr,"%d %s %f %f %f \n",&list.number,list.ad,&list.mid,&list.final,&list.ort);
        i++;
        if(list.ort==a)
            break;
    }
    rewind(ptr);
    while(i>0){
        fscanf(ptr,"%d %s %f %f %f \n",&list.number,list.ad,&list.mid,&list.final,&list.ort);
        i--;
    }
    printf("En iyi ogrenci\n\nNumarasi:%d\nAdi:%s\nOrtalamasi:%f\n",list.number,list.ad,list.ort);
    rewind(ptr);
    fclose(ptr);
}

void kayitsilme(void){
 
    int a,c=0,d=0;
    
    ptr=fopen("ogrencilistesi.txt","r+");
    liste list;
    
    FILE *pt;
    pt=fopen("yedek.txt","w");
    
    printf("Silmek istediginiz ogrencinin numarasini giriniz: \n");
    scanf("%d",&a);
    
    while(!feof(ptr)){
        fscanf(ptr,"%d %s %f %f %f\n",&list.number,list.ad,&list.mid,&list.final,&list.ort);
        if(list.number==a){
            
            rewind(ptr);
            break;
        }
        else{
            fscanf(ptr,"%d %s %f %f %f\n",&list.number,list.ad,&list.mid,&list.final,&list.ort);
            c++;
        }
    }
    while(d<c){
        fscanf(ptr,"%d %s %f %f %f\n",&list.number,list.ad,&list.mid,&list.final,&list.ort);
        fprintf(pt,"%d %s %f %f %f\n",list.number,list.ad,list.mid,list.final,list.ort);
        d++;
    }
    fscanf(ptr,"%d %s %f %f %f\n",&list.number,list.ad,&list.mid,&list.final,&list.ort);
    
    while(!feof(ptr)){
        fscanf(ptr,"%d %s %f %f %f\n",&list.number,list.ad,&list.mid,&list.final,&list.ort);
        fprintf(pt,"%d %s %f %f %f\n",list.number,list.ad,list.mid,list.final,list.ort);
        
    }
    remove("ogrencilistesi.txt");
    rename("yedek.txt","ogrencilistesi.txt");
    
    rewind(pt);
    ptr=pt;
    
    fclose(ptr);
    fclose(pt);
}
