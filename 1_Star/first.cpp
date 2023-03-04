#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    cin>>a;
    long int ld;
    cin>>ld;
    char c;
    cin>>c;
    float f;
    cin>>f;
    double d;
    cin>>d;
    printf("%d",a);
    printf("\n%ld",ld);
    printf("\n%c",c);
    printf("\n%.3f",f);
    printf("\n%.3lf",d);
    return 0;
}