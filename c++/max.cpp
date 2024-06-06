//maximum sum till that element of an array
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,5,4,6,8};
    int mx=0;
    int n=sizeof(arr)/sizeof(int);
    int max_ele[n];
    for(int i=0;i<n;i++){
        for(int k=0;k<=i;k++){
            mx=max(mx,arr[k]);
        }
        max_ele[i]=mx;
    }
    for(int i=0;i<n;i++){
        cout<<max_ele[i]<<" ";
    }
    return 0;
}