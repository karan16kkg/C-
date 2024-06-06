#include<stdio.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insert(int arr[],int n,int capacity,int index,int element){
    if(n>=capacity){
        printf("Not inserted");
    }
    else {
        for(int i=n-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
    }
}
int main(){
    int n=5;
    int arr[100]={8,3,9,1,5};
    display(arr,n);
    n++;
    insert(arr,n,100,3,34);
    display(arr,n);
    return 0;
}