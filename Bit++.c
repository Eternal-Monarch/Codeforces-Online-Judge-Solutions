#include<stdio.h>
int main()
{

    int i;
    char array[100];
    int target;
    int number;
    int count=0;
    char alphabet;
    scanf("%d",&number);//1
    for(i=0; i<number; i++)
    {


        scanf("%s",array);//input

        if(array[1]=='+')

                count++;

         else


            count--;

    }

printf("%d",count);
return 0;
}
