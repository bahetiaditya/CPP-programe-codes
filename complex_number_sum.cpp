#include<iostream>
using namespace std;
class complex {
    float x, y;
    public : 
    void indata(float real, float img) {
        x = real;
        y = img;
    }
    friend complex sum(complex, complex);
    void display(complex);
};
complex sum(complex c1, complex c2) {
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return (c3);
}
void complex :: display(complex c) {
    cout<<c.x<<"+"<<c.y<<"i"<<endl;
}
int main()
{
    complex A,B,C;
    A.indata(3.56, 4.05);
    B.indata(4.25, 2.65);

    C = sum(A,B);
    cout<<"A = ";
    A.display(A);
     cout<<"B = ";
    B.display(B);
     cout<<"C = ";
     C.display(C);
    
   return 0;
}