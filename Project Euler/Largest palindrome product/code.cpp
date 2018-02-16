#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,n,t,i,j,k,pro,rev,rem,num1,max;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>num1;
        max=1;
        for(j=143;j<1000;j++)
            for(k=100;k<1000;k++)
            {
                if(j*k>=num1)
                    break;
                else
                {
                    n=j*k;
                    num=n;
                    rev=0;
                    while(n!=0)   // reversing number
                    {
                     rem=n%10;
                     rev=rev*10+rem;
                     n=n/10;
                    }
                    if(rev==num)
                    {
                        pro=num;
                        if(pro>max)
                            max=pro;
                    }
                }
            }
        cout<<max<<endl;
    }
    return 0;
}
