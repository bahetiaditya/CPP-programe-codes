#include<iostream>
using namespace std;
class employee {
    string name;
    int age;
    string mob;
    string add;

    public : 
    void getdata();
    void putdata();
};
void employee :: getdata() {
    cout<<"Enter the name : ";
    cin>>name;
    cout<<"Enter the age : ";
    cin>>age;
    cout<<"Enter the address : ";
    cin>>add;
    cout<<"Enter the mobile number : ";
    cin>>mob;
}
void employee :: putdata() {
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age;
    cout<<"Address : "<<add<<endl;
    cout<<"Mobile : "<<mob;
    cout<<endl;
}
int main()  {
    int i, size;
    cout<<"enter the number of employees : ";
    cin>>size;
    employee manager[size];
    for(i=  0; i<size; i++ ) {
        cout<<"\nDetails of manager : "<<i+1<<"\n";
        manager[i].getdata();
    }
     for(i=  0; i<size; i++ ) {
        cout<<"\nDetails of manager "<<i+1<<"\n";
        manager[i].putdata();
    }
}