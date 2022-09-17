#include<iostream>
using namespace std;
int main()
{
    int row, col, num;
    cout<<"enter the number of rows : ";
    cin>>row;
    cout<<"enter the number of columns : ";
    cin>>col;
    cout<<"enter the number you want to print";
    cin>>num;
    for(int i =0 ;i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<<num;
        }
        cout<<endl;
    }
   return 0;
}