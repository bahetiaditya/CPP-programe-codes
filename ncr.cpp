#include<iostream>
using namespace std;
int fact(int n) {
    int factorial = 1;
    for(int i = 2; i<=n; i++) {
        factorial = factorial*i;

    }
    return factorial;
}
int main()
{
    int n, r;
    cout<<"enter the number : ";
    cin>>n>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<"nCr is : "<<ans;
    return 0;
}