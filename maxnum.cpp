#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"enter the value of a : "<<endl;
    cin>>a;
    cout<<"enter the value of b : "<<endl;
    cin>>b;
    cout<<"etner the vlaue of c : "<<endl;
    cin>>c;
    if(a>b) {
        if(a>c) {
            cout<<a<<" is greater number\n";
        }
    
    } else if(b>c) {
        cout<<b<<" is greater number\n";
    }
    else 
    cout<<c<<" is greater number\n";
    return 0;

}