// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include<stdio.h>

int main()
{
    int nums1[30];
    int i,n,repeated=-1;
    int countnums1[30]={0};

    printf("Enter the number of element you want to enter:");
    scanf("%d",&n);

    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums1[i]);
        
        if(countnums1[nums1[i]]==1)
        {
            repeated=nums1[i];
        }
        countnums1[nums1[i]]=1;
    }
    if(repeated != -1)
    {
        printf("%d",repeated);
    }
    else
    {
        printf("no repeating number");
    }
    return 0;
}
