#include<stdio.h>
int main()
{
    int n,rem=0,lar=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(rem>lar)
        {
            lar=rem;
        }
        n=n/10;
        
    }
    printf("%d",lar);
    
}