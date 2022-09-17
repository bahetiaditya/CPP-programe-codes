#include<iostream>
using namespace std;
int main()
{
    int row, col, i, j;
    cout<<"enter the number of rows : ";
    cin>>row;
    for(i=row; i>=1; i--) {
        for(j = 1; j<=i; j++ ) {
            cout<<"*";
        }
        
    cout<<endl;
}
}
