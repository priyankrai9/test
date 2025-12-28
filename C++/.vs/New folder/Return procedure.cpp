#include<iostream>
using namespace std;
int main(){
    int i=0;
    for(int i=1;i<10;i++){
        if(i==5){
            cout<< i ;
            return 0;
        }
        cout << i;
        cout << "after return inside for" ;
    }
    cout << "outside for loop";
    return 0;
}