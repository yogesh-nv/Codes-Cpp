#include<iostream>
using namespace std;
int gcd(int m,int n)
{
    if(m==n)
        return m;
    while(m!=1 || n!=1)
    {
        if(m>n)
            m-=n;
        else if(m<n)
            n-=m;
    }
    return m;
}
int main()
{
    cout<<"Enter the numbers\n";
    int m,n;
    cin>>m>>n;
    cout<<gcd(m,n);
    return 0;
}
