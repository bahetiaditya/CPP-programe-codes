#include<iostream>
using namespace std;
class item 
{
    int itemcode[50];
    float itemprice[50];
    int count;
    public :
    void cnt(void) { count = 0 ; }      // initializes count to 0
    void getitem(void);
    void displaysum(void);
    void remove(void);
    void displayitems(void);
};

void item :: getitem(void)           //assign values to data members of item
{
    cout<<"Enter item code : ";
    cin>>itemcode[count];
    cout<<"Enter item cost : ";
    cin>>itemprice[count];
    count++;
}
void item :: displaysum(void)               //display total value of all items
{
    float sum = 0;
    for(int i = 0; i<count; i++)
    sum=sum + itemprice[i];
    cout<<"\n Total value :"<<sum<<"\n";
}

void item :: remove(void)                     //deleting a specified item
{
    int a;
    cout<<" Enter item code : ";
    cin>>a;
    for(int i = 0; i<count; i++)
                   if (itemcode[i] == a)    
                          itemprice[i] = 0;
}
void item :: displayitems(void)            //displaying items
{
    cout<<"\n Code            Price \n ";
    for(int i = 0; i<count; i++)
    {
           cout<<"\n"<<i+1<<" item code is : "<<itemcode[i];
           cout<<"\nitem price is : "<<itemprice[i];
    }
    cout<<"\n";
}
int main( )
{
    item  I;
    I.cnt( );
    int ch;
    do
    {
        cout<<"\n Option are……. \n";
        cout<<"\n1.    Add an item ";
        cout<<"\n2.    Display total value ";
        cout<<"\n3.    Delete an item";
        cout<<"\n4.    Display all items ";
        cout<<"\n5.    Exit";
             cout<<"\n\n  Enter your choice : ";
             cin>>ch; 
        switch(ch)
    {
              case 1 : I.getitem( );  break;
        case 2 : I.displaysum( );  break;
        case 3 : I.remove( );  break;
              case 4 : I.displayitems( );  break;
              case 5 : exit(0);
              default : cout<<"\n Error in input; try again \n";
              break;
    }
} while(ch !=5);
}