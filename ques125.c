// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char str[60];

    fp=fopen("data.txt","a+");
    if(fp == NULL)
    {
        printf("Unable to open");
        exit(0);
    }
    while(fgets(str,sizeof(str),stdin) != NULL)
    {
        fputs(str,fp);
    }
    fclose(fp);
    return 0;
}
