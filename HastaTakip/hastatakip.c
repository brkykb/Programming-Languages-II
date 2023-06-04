#include <stdio.h>

struct hastalistesi{
    int hastaid;
    int tc;
    char isim[20];
    int yas;
    char hastalik[30];
};
typedef struct hastalistesi liste;

FILE *ptr;
int b=0;

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
    
    ptr=fopen("hastalistesi.txt","a");
    
    printf("Kac hastanin bilgisini gireceginizi yaziniz: ");
    scanf("%d",&a);
    
    
    
            for(i=0;i<a;i++){
                b++;
                list.hastaid=b;
                printf("%d.Yeni hasta tc numarasini girin: ",(i+1));
                scanf("%d",&list.tc);
                printf("%d.Yeni hasta ismini girin: ",(i+1));
                scanf("%s",list.isim);
                printf("%d.Yeni hastanin yasini girin: ",(i+1));
                scanf("%d",&list.yas);
                printf("%d.Yeni hastanin hastaligini girin: ",(i+1));
                scanf("%s",list.hastalik);
                
                fwrite(&list,sizeof(liste),1,ptr);
            }
    
    fclose(ptr);
}

void kayitlisteleme(FILE *ptr){
    
    liste list;
    ptr=fopen("hastalistesi.txt","r");
    
    fseek(ptr,0,SEEK_SET);
    printf("%-10s %-16s %-16s %-16s %10s\n","ID","TC","İsim","Yas","Hastalik");
    while(fread(&list, sizeof(liste), 1, ptr) == 1){
        
        printf("%d %d %s %d %s\n",list.hastaid,list.tc,list.isim,list.yas,list.hastalik);
    }
    printf("\n");
    fclose(ptr);
}
                   
void kayitarama(FILE *ptr){
    
    int a=0,s=0;
    liste list;
    ptr=fopen("hastalistesi.txt","r+");
    printf("Aramak istediginiz hasta tcsini giriniz: ");
    scanf("%d",&a);
    
    fseek(ptr,0,SEEK_SET);
    while(!feof(ptr)){
        fread(&list,sizeof(liste),1,ptr);
        if(list.tc==a){
            printf("Hasta bilgileri:\nID:%d\nTC:%d\nAd:%s\nYas:%d\nHastalik:%s\n\n",list.hastaid,list.tc,list.isim,list.yas,list.hastalik);
            break;
        }
        else
            s++;
        
    }
    printf("Eger guncelleme yapmak istiyosaniz guncelleme yapabilir ya da cikis ile cıkabilirsiniz\n");
    
    while(a!=5&&a!=6){
       
            printf("1.Ad guncelleme\n2.TC guncelleme\n3.Hastalik guncelleme\n4.Yeni yas giriniz\n5.Kayit silme\n6.Cikis\n\n");
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
                    scanf("%d",&list.tc);
                    fseek(ptr,s*sizeof(liste),SEEK_SET);
                    fwrite(&list,sizeof(liste),1,ptr);
                    break;
                case 3:
                    printf("Yeni hastaligi giriniz:");
                    scanf("%s",list.hastalik);
                    fseek(ptr,s*sizeof(liste),SEEK_SET);
                    fwrite(&list,sizeof(liste),1,ptr);
                    break;
                case 4:
                    printf("Yeni yasi giriniz:");
                    scanf("%d",&list.yas);
                    fseek(ptr,s*sizeof(liste),SEEK_SET);
                    fwrite(&list,sizeof(liste),1,ptr);
                    break;
                case 5:
                    fseek(ptr,s*sizeof(liste),SEEK_SET);
                    liste list={0,0,"",0,""};
                    fwrite(&list,sizeof(liste),1,ptr);
                    printf("Silme islemi basarili!\n\n");
                    break;
            }
        }
    
    fclose(ptr);
}

void dosyalama(FILE *ptr){
    
    FILE *pt;
    ptr=fopen("hastalistesi.txt","r");
    pt=fopen("liste.txt","w+");
    liste list;
    
    fseek(ptr,0,SEEK_SET);
    fprintf(pt,"ID TC İsim Yas Hastalik\n\n");
    while(fread(&list, sizeof(liste), 1, ptr) == 1){
        fprintf(pt,"%d %d %s %d %s\n",list.hastaid,list.tc,list.isim,list.yas,list.hastalik);
    }
    fclose(ptr);
    fclose(pt);
}
