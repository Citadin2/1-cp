#include <stdio.h>
#include <stdlib.h>

int main()
{

    //problema 3.5
    int x;
    scanf("%d",&x);
    if(x<-2)
    {
        printf("The value of the function is:%d",x*x-7*x+4);
    }
    else if(x==-2)
    {
        printf("The value of the function is:%d",0);
    }
    else if(x>-2)
    {
        printf("The value of the function is:%d",x*x+5*x-2);
    }
    return 0;
}
