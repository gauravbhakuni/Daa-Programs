#include<iostream>
using namespace std;

int search(int a[],int n,int key,int *comparision)
{
    int low = 0,high = n-1;
    while(low <= high)
    {
        int mid = (low +high)/2;
        (*comparision)++;
        if(a[mid] == key)
            return 1;
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}

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
    
    if(search(arr,n,key,&comp))
        cout<<"\nKey is found!!"<<endl;
    else
        cout<<"\nKey is not found!!"<<endl;
    
    cout<<"Total comparisions performed are: "<<comp;
    return 0;
}

