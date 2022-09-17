#include<iostream>
using namespace std;
class B;
class A {

    int a;
    public :
    void getdata(int m) {
    a = m; 
    }
    friend void Max(A,B);
};
class B {
    int b;
    public :
    void getdata(int n) {
        b = n;
    }
    friend void Max(A,B);
};
void Max(A first, B second) {
    if(first.a> second.b) {
        cout<<first.a<<" is greater than "<<second.b;
    }
    else{
        cout<<second.b<<" is greater than "<<first.a;
    }
}
int main() {
    int m,n;
    cout<<"Enter the numbers for comparison : ";
    cin>>m>>n;
    class A first;
    class B second;
    first.getdata(m);
    second.getdata(n);
    Max(first,second);
    return 0;
}