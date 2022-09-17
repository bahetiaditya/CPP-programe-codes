#include<iostream>
using namespace std;
class students {
    public:
    string name;
    string roll;
    string branch;
};
int main()
{
    students s1;
    s1.name = "Aditya Baheti";
    s1.roll = "2021BIT002";
    s1.branch = "Information Technology";
    students s2;
    s2.name = "Maitrey Chamnikar";
    s2.roll = "2021BIT004";
    s2.branch = "Information Technology";
    students s3;
    s3.name = "Aryan Ojha";
    s3.roll = "2021BIT002";
    s3.branch = "Information Tehcnology";
    cout<<s1.name<<endl<<s1.roll<<endl<<s1.branch<<endl;
    cout<<"\n\n";
    cout<<s2.name<<endl<<s2.roll<<endl<<s2.branch<<endl;
    cout<<"\n\n";
    cout<<s3.name<<endl<<s3.roll<<endl<<s3.branch<<endl;
    cout<<"\n\n";
    return 0;
}