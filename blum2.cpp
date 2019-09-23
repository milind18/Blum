#include<bits/stdc++.h>

using namespace std;
int blumSelect(int *a,int n,int ind)
{
    if(n<20)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[a[i]]>arr[a[i+1]])
                {
                    int temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
        return a[ind];
    }
    else
    {
        int m=(n/5)*5;
        for(int i=0;i<m;i+=5)
        {
            
                int med=blumSelect(a+i,5,3);
                int temp=a[i/5];
                a[i/5]=a[med];
                a[med]=temp;
        }
       int x= blumSelect(a,0,m/5);
    }
    
}
int main()
{
double * arr;
int k;
cin>>k;
int i=0;
for(int i=0;i<k;i++)
{
double x,y;
cin>>x>>y;
arr[i]=sqrt(x*x+y*y);

}
int a[k];
for(int i=0;i<k;i++)
{
    a[i]=i;
}
int ans=blumSelect(a,k,(k+1)/2);
cout<<arr[ans];
    return 0;
}