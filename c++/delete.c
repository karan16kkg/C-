#include<stdio.h>
void input(int arr[],int n){
    printf("Enter the elements \n");
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
void delete(int arr[],int n,int capacity,int index){
    for(int i=index;i<=n-1;i++) {
        arr[i]=arr[i+1];
    }
}
int main(){
    int n;
    printf("Enter the  no of elements : ");
    scanf("%d",&n);
    int arr[100];
    input(arr,n);
    display(arr,n);
    n--;
    delete(arr,n,100,3);
    display(arr,n);
    return 0;
}