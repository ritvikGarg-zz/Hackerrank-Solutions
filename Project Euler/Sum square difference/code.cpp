#include<bits/stdc++.h>
using namespace std;

int main()
{
    long i,t,n,sum1,sum2,diff;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        sum1=(n*(n+1)*(2*n+1))/6;  // applying simple formula...
        sum2=n*(n+1)/2;            // applying simple formula... 
        diff=(sum2*sum2)-sum1;      
        cout<<diff<<endl;
    }
    return 0;
}
