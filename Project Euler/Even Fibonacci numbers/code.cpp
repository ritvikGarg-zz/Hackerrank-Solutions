#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i,j,num,a,b,c,sum;
    cin>>t;
    for(i=0;i<t;i++)
    {
        sum=0;
        cin>>num;
        a=1;
        b=2;
        c=a+b;
        while(c<num)
        {
            if(c%2==0)
                sum+=c;
            a=b;
            b=c;
            c=a+b;
        }
        cout<<sum+2<<endl;
    }
    return 0;
}
