#include<iostream>
using namespace std;
bool pythagorean(int a,int b,int c){
    int x=max(a,max(b,c));
    int y,z;
    if(x==a){
        y=b;
        z=c;
    }
    else if(x==b){
        y=a;
        z=c;
    }
    else if(x==c){
        y=a;
        z=b;
    }
    if(x*x==y*y+z*z){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(pythagorean(a,b,c)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}