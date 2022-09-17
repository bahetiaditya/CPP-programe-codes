#include<iostream>
using namespace std;
int main()
{
    int n;
     cout<<"enter the number n till which you want to find sum : ";
     cin>>n;
     int sum =0;
     for(int i=0; i<=n; i++) {
       
        sum = sum + i;
     }
     cout<<"sum is : "<<sum;
     return 0;

}