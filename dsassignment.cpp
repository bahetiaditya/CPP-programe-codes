#include <iostream>
using namespace std;
int top = -1, arr[100];

void push(int element)
{

    if (top == -1)
    {
        top = 0;
    }
    else
    {
        arr[top] = element;
        top++;
    }
}
void pop()
{

    top--;
    cout << "deleted  element \n"
         << arr[top];
}
void display()
{
    for (int i = 0; i < top; i++)
    {
        cout << arr[i] << "  ";
    }
}
int main()
{
    int ch;

    do
    {
        cout << "\n 1  push\n 2 pop \n 3 display \n 4 exit";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int k;
            cout << "enter the element\n"
                 << " ";
            cin >> k;
            push(k);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            cout << "enter invali";

        } // while(ch!=3);

    } while (ch != 4);
}