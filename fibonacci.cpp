#include<iostream>
using namespace std;
void fib(int n) 
{
    int t1 = 0;
    int t2 = 1;
    int t;
    
    for(int i =0; i<n; i++) {
        cout<<t1<<"\t";
        t = t1 + t2;
        t1 =t2;
        t2 = t;

    }
    return;

}
int main()
{
    int n;
    cout<<"enter the number of terms in series to be printed : ";
    cin>>n;
    fib(n);
    return 0;
}