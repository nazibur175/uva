#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=50; i++)
    {
        if(i%3==0)
        continue;
        printf("%d \n",i);
        
            
        if(i==20)
            break;
    }
    return 0;
}
