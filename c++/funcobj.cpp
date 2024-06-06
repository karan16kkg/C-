#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={3,8,1,10,2};
    // sort(arr,arr+5);
    sort(arr,arr+5,greater<int>());//for sort greater to shorter
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}