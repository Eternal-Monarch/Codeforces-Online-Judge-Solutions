#include<stdio.h>
int main()
{
    int number;
    int i;
    int j;
    int count=0;
    int a=0;
    int b=0;
    int c=0;
    int array[100];
    int number2;
    int temp=0;
    int initial=1;
    int initial2=1;
    scanf("%d",&number);
    for(i=0; i<number; i++)
    {

            scanf("%d %d %d",&a,&b,&c);
            temp=a+b+c;



        if(temp>=2)

                count++;
}



    printf("%d",count);
    return 0;
}


