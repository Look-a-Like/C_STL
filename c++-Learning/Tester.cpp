#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.erase(v.begin()+1,v.end()-2);
    for(auto it : v){
        cout<<it<<" ";
    }
    return 0;
}