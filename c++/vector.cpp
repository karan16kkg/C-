#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int n,element;
    vector<int>vec;
    cout<<"Enter the no of elements : ";
    cin>>n;
    cout<<"Enter the elements"<<endl;

    for(int i=0;i<n;i++) {
        cin>>element;
        vec.push_back(element);
    }
    // for(int i=0;i<n;i++) {
    //     cout<<vec[i]<<" ";
    // }
    display(vec);
    vector<int> :: iterator iter = vec.begin();
    vec.insert(iter+2,23);
    display(vec);
    //other ways of making vectors
    vector<char>vec2(4); //it has only four elements
    vector<int>vec3(6,10); //it has 6 10s
    display(vec3);
    return 0;
}