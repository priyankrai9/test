#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int i;
    string a;
    cin>>a;
    i=strlen(a);
    while(i){
    cout<<a[i]<<endl;
    i--;
    }
}