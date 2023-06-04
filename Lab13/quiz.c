void swapfonk(FILE *fp){
    
    int a,b;
    
    struct liste temp1,temp2;
    
    printf("Degistirilecek iki satiri giriniz:\n");
    scanf("%d %d",&a,&b);
    
    fseek(fp,(a-1)*sizeof(struct musteri),SEEK_SET);
    fread(&temp1,sizeof(struct musteri),1,fp);
    
    fseek(fp,(b-1)*sizeof(struct musteri),SEEK_SET);
    fread(&temp2,sizeof(struct musteri),1,fp);
    
    fseek(fp,(a-1)*sizeof(struct musteri),SEEK_SET);
    fwrite(&temp2,sizeof(struct musteri),1,fp);
    
    fseek(fp,(b-1)*sizeof(struct musteri),SEEK_SET);
    fwrite(&temp1,sizeof(struct musteri),1,fp);
}
