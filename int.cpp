#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ext[k];
    for(int i=0;i<k;i++) {
        ext[i]=arr[i];
    }
    // swaping
    for(int i=0;i<n-k;i++)
    {
        arr[i]=arr[i+k];
    }
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    int kk=0;
    for(int i=n-k;i<n;i++)
    {
        arr[i]=ext[kk];
        kk++;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
rotate(arr,arr+k,arr+size);
// 1 2 3 4 5 7 8 9
// k=2
// 3 4 5 6 7 8 9 1 2
1 2 3 4 5 6
final = 3 4 5 6 1 2
6 5 3 4 2 1
6 5 3 4 1 2