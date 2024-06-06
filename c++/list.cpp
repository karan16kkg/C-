#include<iostream>
#include<list>
using namespace std;
void display(list<int>ls){
    list<int> :: iterator itr;
    for(itr=ls.begin();itr!=ls.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}
int main() {
    int n,element;
    list<int>lst;
    cout<<"Enter the no of elements : ";
    cin>>n;
    cout<<"Enter the elements";
    cout<<endl;
    for(int i=0;i<n;i++) {
        cin>>element;
        lst.push_back(element);
    }
    display(lst);

    list<int>lst2;
    list<int> :: iterator iter;
    iter=lst2.begin();
    *iter=6;
    iter++;
    *iter=9;
    iter++;
    *iter=12;
    iter++;
    display(lst2);
    lst.merge(lst2);
    display(lst);
    return 0;
}