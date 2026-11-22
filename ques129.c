// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include<stdio.h>

int main()
{
    int num;
    int sum=0,count;
    FILE *fp;
    fp=fopen("numbers.txt","r");

    if(fp== NULL)
    {
        printf("Error in the opening");
        return 0;
    }
    while(fscanf(fp,"%d",&num) == 1)
    {
        sum+=num;
        count++;
    }
    if(count>0)
    {
        printf("sum=%d,average=%f",sum,(float)sum/count);
    }
    fclose(fp);
    return 0;

}
