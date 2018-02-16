#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,i,j,pro,count;
    cin>>t;
    for(i=0;i<t;i++)
    {
        count=0;
        cin>>n;
        int arr[n];
        for(j=2;j<=n;j++)
        {
            if(j==2)
                arr[count++]=2;
            else
            {
                pro=j;
                for(k=0;k<count;k++)
                {
                    if(pro%arr[k]==0)
                        pro=pro/arr[k];
                }
                if(pro!=1)
                    arr[count++]=pro;
            }
        }
        pro=1;
        for(j=0;j<count;j++)
            pro=pro*arr[j];
          cout<<pro<<endl;
    }
    return 0;
}
