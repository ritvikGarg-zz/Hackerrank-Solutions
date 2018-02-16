#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i,j,n,sum1,sum2,num1,num11,sum3,r;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int k=3,x=5;
        cin>>n;
        n--;        // below n
        r=n%3;
        num1=n-r;
        num11=1+(num1-3)/3;    //using A.P. formula..
        sum1=((num11)*(3+num1))/2;
        r=n%5;
        num1=n-r;
        num11=1+(num1-5)/5;
        sum2=((num11)*(5+num1))/2;
        r=n%15;
        num1=n-r;
        num11=1+(num1-15)/15;   // common to both series..
        sum3=((num11)*(15+num1))/2;
        cout<<sum1+sum2-sum3<<endl;
    }
    return 0;
}
