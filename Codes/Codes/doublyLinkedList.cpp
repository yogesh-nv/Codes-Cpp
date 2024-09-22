#include<iostream>
#include<cmath>
using namespace std;

int max(int a,int b)
{
    return a>b?a:b;
}
int maxSum(int a[],int n)
{
    int mx=a[0];
    
    for(int i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
    }
    return mx;
}
int main()
{
    int a[]={4,3,6,8,9,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n;
    cout<<maxSum(a,n);
    return 0;
}
