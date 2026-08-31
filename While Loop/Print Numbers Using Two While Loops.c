#include<stdio.h>
int main()
{
    int i=0;
    printf("Numbers from 1 to 10 are:\n");
    while(i<10)
    {
        i++;
        printf("%d\n",i);
    }
    printf("Numbers from 10 to 1 are:\n");
    while(i>0)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}
