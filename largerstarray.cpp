#include<iostream>
using namespace std;
int main()
{
    int arr[10],n;
    int sum=0;

    cout<<"\nEnter the size of an array\n";
    cin>>n;
    cout<<"Enter the array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of elements are:\n";
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
   cout<<"Sum of elements "<<sum;
    return 0;
}
