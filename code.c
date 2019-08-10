#include<stdio.h>
#include<stdio.h>
int main()
{
    int x,p,count=0;
    scanf("%d%d",&x,&p);
    p=trunc(100-p);
    while(x>0)
    {
              count=count+x;
              x=trunc((p*x)/100);
    }
    printf("%d",count);
    return 0;
}
