#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int j;
    for(j=0;j<t;j++)
    {
        long a,b,c;
        int i;
        scanf("%ld %ld",&a,&b);
        for(i=a;i<b;i++)
             c=i&(i+1);
        printf("%ld\n",c);
    }
        return 0;
}
