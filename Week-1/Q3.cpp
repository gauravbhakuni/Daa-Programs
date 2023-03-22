#include<iostream>
#include<cmath>
using namespace std;

int search(int a[],int n,int key,int *comparision)
{
    int block_size = sqrt(n);
    int prev = 0;
    int curr = block_size;
    while(a[min(curr,n)-1] < key)
    {
        (*comparision)++;
        prev = curr;
        curr += block_size;
        if(prev >= n)
            return 0;
    }
    for(int i=prev;i<curr;i++)
    {
        (*comparision)++;
        if(a[i] == key)
            return 1;
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
