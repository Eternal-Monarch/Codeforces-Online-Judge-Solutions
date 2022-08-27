#include<stdio.h>
int main()
{
    int i;
    int a;
    int b;
    int count=0;
    int temp=0;
    int array[100];
    scanf("%d %d",&a,&b);
    for(i=0; i<a; i++)
    scanf("%d",&array[i]);
    for(i=0; i<a; i++)
    {
    if(array[i]>=array[b-1] && array[i]>=1)
    count++;
    }
    printf("%d",count);
    return 0;
}
