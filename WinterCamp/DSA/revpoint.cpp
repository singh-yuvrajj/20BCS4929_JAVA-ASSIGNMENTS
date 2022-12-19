#include<bits/stdc++.h>
using namespace std;
void reversepoint(int *arr,int n){
    for(int i=0;i<n/2;i++){
        swap(*(arr+i),*(arr+n-1-i));
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    reversepoint(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}