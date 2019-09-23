#include<bits/stdc++.h>

using namespace std;

int partition(int *arr,int n ,int ind)
{
    int temp=arr[ind];
    arr[ind]=arr[n-1];
    arr[n-1]=temp;
    int i=-1;
    int j=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>arr[n-1])
        {
            continue;
        }
        else
        {
            if(arr[j]<=arr[n-1])
            {
                temp=arr[i+1];
                arr[i+1]=arr[j];
                arr[j]=temp;
                i++;
            }
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[n-1];
    arr[n-1]=temp;
    return i+1;
}

int main()
{
int arr[10]={2,6,3,1,67,9,10,6,5,11};
cout<<partition(arr,10,4);
}
