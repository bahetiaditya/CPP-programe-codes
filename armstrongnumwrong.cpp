#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int sum = 0;
    int originaln = n;
    while(n>0) {
        int lastdigit = n%10;
        sum = sum + pow(lastdigit,3);
        n = n/10;
    }
    if(sum == originaln) {
        cout<<"Armstrong Number";

    }
    else {
        cout<<"not an Armstrong Number";
    }
    return 0;
}