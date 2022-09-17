#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number : ";
    cin>>a;
    if(a%2 == 0 && a%3 == 0 ) {
        cout<<"number divisible by both 2 and 3"<<endl;
    }
    else if(a%2 == 0 && a%3 != 0) {
        cout<<"divisible by 2 not 3"<<endl;
    }
    else if(a%3 == 0 && a%2 != 0) {
        cout<<"divisible by 3 not 2"<<endl;

    }
    else {
        cout<<"not divisible by any of 2 and 3 \n";

    }
    return 0;
}