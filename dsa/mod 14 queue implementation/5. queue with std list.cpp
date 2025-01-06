#include <bits/stdc++.h>
using namespace std;


class MyQueue{
    public:
    list<int> l;

    void push(int val){
        l.push_back(val);
    }

    void pop(){
        l.pop_front();
    }

    bool empty(){
        return l.empty();
    }

    int size(){
        return l.size();
    }

    int front(){
        return l.front();
    }

    int back(){
        return l.back();
    }
};


int main(){
    // cout << (bool)NULL << endl;
    
    return 0;
}