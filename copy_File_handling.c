#include<stdio.h>
main(){
    FILE *p1,*p2;
    char ch;
    p1 = fopen("source.c"."r");
    p2 = fopen("dest.c","w");
    if (p1==NULL){printf("File does not exit");
    }
    else {
        while ((fscanf(p1,"%c",ch))!=EOF){
            fprintf(p2,"%c",ch);
        }
    }
    fclose(p1);
    fclose(p2);
}