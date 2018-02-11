#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test_cases;
    scanf("%d",&test_cases);
    int i;
    for(i=0;i<test_cases;i++)
    {
        int count=0;
        unsigned long long int a;
        unsigned long long int b;
        scanf("%llu",&a);
        if(a==1)
        {
            printf("Richard");
            goto jump;
        }
        b=a;
        while(a>1)
        {
            unsigned long long k=log(a)/log(2);
            unsigned long long h=pow(2,k);
            if(h==a)
            {
                a=a/2;
                count++;
            }
            else
            {
                a=a-h;
                count++;
            }
        }
        if(count%2==0)
            printf("Richard\n");
        else
            printf("Louise\n");
    }
    jump:
    return 0;
}

