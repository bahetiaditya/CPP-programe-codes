#include <iostream>
using namespace std;
class copy
{
   int n;

public:
   copy() {}
   copy(int a)
   {
      n = a;
   }
   copy(copy &x)
   {
      n = x.n;
   }
   void display()
   {
      cout << n;
   }
};
int main()
{
   int j;
   cout << "enter the number to copy : ";
   cin >> j;
   class copy A(j);
   class copy B(A);
   class copy C = A;
   class copy D;
   D = A;
   cout << "\nID of A : ";
   A.display();
   cout << "\nID of B : ";
   B.display();
   cout << "\nID of C : ";
   C.display();
   cout << "\nID of D : ";
   D.display();

   return 0;
}