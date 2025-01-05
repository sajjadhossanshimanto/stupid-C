#include <bits/stdc++.h>
using namespace std;


class MyStack{
    public:
    vector<int> v;

    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return *v.end();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
    }
};

int main(){
    MyStack ms;
    
    
    return 0;
}