#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int>marks;
    marks["ram"]=98;
    marks["sham"]=67;
    marks["man"]=83;
    map<string,int> :: iterator iter;
    for(iter=marks.begin();iter!=marks.end();iter++) {
        cout<<(*iter).first<<" "<<(*iter).second;
        cout<<endl;
    }
    return 0;
}
