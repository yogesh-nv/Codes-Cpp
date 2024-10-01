#include <iostream>
using namespace std;
bool stringCompare(string s1,string s2)
{
    int n1=s1.length();
    int n2=s2.length();
    int lmin=min(n1,n2);
    for(int i=0;i<lmin;i++)
    { if(s1[i]!=s2[i])
        return false;
    }
    if(n1!=n2)
        return false;
    return true;
}
int main() {
    string s1="yogesh";
    string s2="yo";
    string s3="gesh";
    cout<<stringCompare(s1,s1);
    return 0;
}

