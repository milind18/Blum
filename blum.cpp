#include<bits/stdc++.h>

using namespace std;
int smallmedian(int *arr, int ll)
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        a[i]=arr[ll+i];
    }

    for(int i=0;i<5;i++)
    {
        int temp=a[i];
        for(int j=i-1;j>=0;j--)
        {
            if(temp>a[j])
            {
                break;
            }
            else
            {
                a[j+1]=a[j];
                a[j]=temp;
            }
            
        }
    }
}

int main()
{
int a[5]{3,1,53,2,6};
for(int i=0;i<5;i++)
    {
        int temp=a[i];
        for(int j=i-1;j>=0;j--)
        {
            if(temp>a[j])
            {
                break;
            }
            else
            {
                a[j+1]=a[j];
                a[j]=temp;
            }
            
        }
    }
for(int i=0;i<5;i++)
{
    cout<<a[i]<<" ";
}
    return 0;
}