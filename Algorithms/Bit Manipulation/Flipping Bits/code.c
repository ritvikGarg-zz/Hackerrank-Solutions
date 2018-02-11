#include<stdio.h>
#include<math.h>

int main()
{
    int j,t,a,i,arr[33];
    long long sum,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        arr[33]={0};
        scanf("%llu",&n
        while(n>1)
        {
            a=log(n)/log(2);
            arr[a]=1;
            n=n-pow(2,a);
        }
        if(n==1)
            arr[0]=1;
        for(j=0;j<=32;j++)
        {
            if(arr[j]==0)
                arr[j]=1;
            else
                arr[j]=0;
        }
        sum=0;
        for(j=0;j<32;j++)
        {
            if(arr[j]==1)
            sum=sum+pow(2,j);
        }
        printf("%lld\n",sum);
    }
    return 0;
}

