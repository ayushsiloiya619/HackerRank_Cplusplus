#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    cin>>a;
    string b;
    cin>>b;
    int len1=a.size();
    int len2=b.size();
    cout<<len1<<" "<<len2<<endl;
    string s=a+b;
    cout<<s<<endl;
    string t=a;
    a[0]=b[0];
    b[0]=t[0];
    cout<<a<<" "<<b<<endl;
    return 0;
}