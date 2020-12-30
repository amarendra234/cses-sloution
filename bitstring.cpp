#include <iostream>
using namespace std;
#define m 1000000007
int main() {
    int n;
    cin>>n;
    long long int f=1;
    for(int i=1;i<=n;i++)
    {
        f=((f%m)*(2%m))%m;
    }
    cout<<f<<endl;

}
