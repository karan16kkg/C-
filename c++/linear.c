#include<stdio.h>
void input(int arr[],int n){
    printf("Enter the elements\n");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void linear(int arr[],int n,int element){
    for(int i=0;i<n;i++) {
        if(arr[i]==element){
            printf("%d",i);
        }
    }
}
void binary(int arr[],int n,int element){
    int low,mid,high;
    low=0;
    high=n-1;
    mid=low+high/2;
    while(low<=high){
        if(arr[mid]==element){
            printf("%d",mid);
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}
int main() {
    int arr[20];
    int n;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    input(arr,n);
    display(arr,n);
    //linear(arr,n,5);
    binary(arr,n,5);
    return 0;
}