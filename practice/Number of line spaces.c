#include<stdlib.h>
#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    int nol=0,nos=0,noc=0,not=0;
    fp=fopen("A.txt","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        break;
        noc++;
        if(ch==' ')
        nos++;
        if(ch=='\n')
        nol++;
        if(ch=='\t')
        not++;
        
    }
    fclose(fp);
    printf("Number of characters=%d\n",noc);
    printf("Number of spaces=%d\n",nos);
    printf("Number of lines=%d\n",nol);
    printf("Number of tabs=%d\n",not);

}