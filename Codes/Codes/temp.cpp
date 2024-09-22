#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void  bubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
}
int main()
{
    int a[]={8,2,1,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
    bubbleSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}
