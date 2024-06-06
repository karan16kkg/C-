#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    x=n;
    int rem=0,arms=0;
    while(n!=0){
        rem=n%10;
        arms=arms+rem*rem*rem;
        n=n/10;
    }
    if(arms==x){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not armstrong"<<endl;
    }
    return 0;
}