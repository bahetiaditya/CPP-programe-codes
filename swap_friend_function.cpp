// write a program to swap private data member of a classes named class_1 and class_2 using friend function.
#include<iostream>
using namespace std;
class class_2; 
class class_1{
    int n;
    public :
    void indata(int a) {
        n=a;
    }
    void display() {
        cout<<"C1 = "<<n<<endl;
    }
    friend void exchange(class_1 &, class_2 &);
};
class class_2{
    int k;
    public :
    void indata(int b) {
        k=b;
    }
    void display() {
        cout<<"C2 = "<<k<<endl;
    }
    friend void exchange(class_1 &, class_2 &);
};
void exchange(class_1 &x, class_2 &y) {
    int temp = x.n;
    x.n = y.k;
    y.k = temp;
}
int main()
{
    class_1 C1;
    class_2 C2;
    C1.indata(20);
    C2.indata(30);
    cout<<"values before excange : "<<"\n";
    C1.display();
    C2.display();
    exchange(C1, C2);
    cout<<"values after exchange : "<<"\n";
    C1.display();
    C2.display();
   return 0;
}