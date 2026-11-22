// Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char source[60];
    char str[100];

    printf("Enter the file name:");
    scanf("%s",source);
    fp=fopen(source,"r");
    if(fp == NULL)
    {
        printf("File does not exist");
        exit(0);
    }
    while((fgets(str,100,fp)) != NULL)
    {
        puts(str);
    }
    fclose(fp);
    return 0;
}
