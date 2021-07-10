#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *fp;
    char ch;
    fp = fopen("CS-A.c","r");
    if (fp==NULL)
{
    printf("File does not Exit");
}
else{
    while((fscanf(fp,"%c",&ch))!=EOF){
        printf("%c",ch);
    }
}
fclose(fp);

}