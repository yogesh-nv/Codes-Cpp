#include<iostream>
using namespace std;
int firstOccurance(int* arr,int left,int right,int x)
{
    if(left<=right)
    {
        int mid=left+(right-left)/2;
        if(mid==0 || x>arr[mid-1] && x==arr[mid])
            return mid;
        else if(x>arr[mid])
            return firstOccurance(arr,  mid+1,right, x);
        else
            return firstOccurance(arr, left, mid-1, x);
    }
    return -1;
}
int lastOccurance(int arr[],int n,int left,int right,int x)
{
    if(left<=right)
    {
        int mid=left+(right-left)/2;
        if(mid==n-1 || x<arr[mid+1] && x==arr[mid])
            return mid;
        else if(x<arr[mid])
            return lastOccurance(arr, n, left, mid-1, x);
        else
            return lastOccurance(arr, n, mid+1, right, x);
    }
    return -1;
}
int occurance(int arr[],int n,int x)
{
    int firstIndex=firstOccurance(arr,0,n-1,x);
    if(firstIndex==-1)
        return -1;
    int lastIndex=lastOccurance(arr,n,firstIndex,n-1,x);
    return lastIndex-firstIndex+1;
}
int main()
{
    int arr[]={1,1,2,2,2,2,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the element to find its frequency\n";
    int x;
    cin>>x;
    cout<<"occurance of "<<x<<" = "<<occurance(arr,n,x)<<endl;
    return 0;
}
