#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key) {
    for(int i = 0; i<n; i++) {
        if (arr[i] == key)
        return i+1;
    }
    return -1;
}
int main()
{
    int n; 
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : \n";
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key to find index : ";
    cin>>key;
    cout<<linearsearch(arr, n, key )<<endl;
    return 0;
}