#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,t,i,j,max,pro,l,len;
    string num;   // imp step..so as to break down every single digit..
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        int arr[n];
        cin>>num;
        for(j=n-1;j>=0;j--)
            arr[j]=num[j]-48;       // ASCII value of '0' is 48.
         
        for(j=0;j<n-k+1;j++)
        {
            pro=1;
            for(l=j;l<j+k;l++)
                pro*=arr[l]; 
            if(j==0)
                    max=pro;
            else
                if(pro>max)
                    max=pro;
        }     
         cout<<max<<endl;
    }
    return 0;
}
