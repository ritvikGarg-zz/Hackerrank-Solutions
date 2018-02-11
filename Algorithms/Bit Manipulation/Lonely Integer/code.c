/*
for complete question go to this link: https://www.hackerrank.com/challenges/lonely-integer/problem
---------------------------------------------------------------------------------------------------

Consider an array of n integers, where all but one of the integers occur in pairs. In other words, every element in  occurs exactly
twice except for one unique element.

Given the array, find and print the unique element.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int main() {

    int arr_size,i,num; // declaring variables..
    scanf("%d",&arr_size);
    int arr[101]={0};     // initializing an array 'arr' of size '101' because we have range of values bw 0 and 100(both inclusive)...
    for(i=0;i<arr_size;i++)
    {
        scanf("%d",&num);
        arr[num]++;
    }

    for(i=0;i<101;i++)
    {
        if(arr[i]%2==1)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
