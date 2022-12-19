#include<bits/stdc++.h>
using namespace std;
void evenodd(int *ar,int l){
    int even=0,odd=0;
    int **a=&ar;

    for(int i=0;i<l;i++){
        if(**a%2==0)
         even++;
        else
         odd++;
    *(*a++);
    }
    cout<<even;
    cout<<odd;

}
int main()
{
    int arr[5]={1,2,3,4,5};
    evenodd(arr,5);
   
    return 0;
    


}
