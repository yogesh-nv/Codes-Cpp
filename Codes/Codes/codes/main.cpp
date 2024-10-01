#include<iostream>
using namespace std;
void primeFactor(int num)
{
    while(num%2==0)
    {
        cout<<"2 ";
        num/=2;
    }
    for(int i=3;i*i<=num;i+=2)
    {
        while(num%i==0)
        {
            cout<<i<<" ";
            num/=i;
        }
    }
    if(num>2)
        cout<<num;
}
int main()
{
    cout<<"Enter the number\n";
    int num;
    cin>>num;
    cout<<endl;
    primeFactor(num);
    return 0;
}
