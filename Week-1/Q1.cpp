#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n,key,comp = 0;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched: ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        comp++;
        if(arr[i] == key)
        {
            cout<<"\nKey is found!!"<<endl;
            cout<<"Total comparisions performed are: "<<comp;
            return 0;
        }
    }
    cout<<"\nKey is not found!!"<<endl;
    cout<<"Total comparisions performed are: "<<comp;
    return 0;
}
