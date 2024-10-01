#include <iostream>
using namespace std;
void subString(string s1,int n)
{
    for(int length=1;length<=n;length++)
        for(int i=0;i<=n-length;i++)
        {
            int j=i+length-1;
            for(int k=i;k<=j;k++)
                cout<<s1[k];
            cout<<endl;
        }
}

int main() {
    string s1="yogesh";
    int n=s1.size();
    subString(s1,n);
    return 0;
}
