#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> s;
    int n;
    cin >> n;
    //s.push(1);
    while(n--)
    s.push(n);
    //while(!s.empty())
    while(s.empty()){
    cout<<s.top();
    s.pop();
    }
}