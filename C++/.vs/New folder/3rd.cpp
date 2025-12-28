#include<iostream>
using namespace std;
int isprime(int n){
    int a;
    //cin >> n;
    for(a=2;a<=n/2;a++){
        if(n%a==0){
            return 0;
      }
  }
  return n;
}
int main(){
int a,b;
b=2;
cin >> a;
while(b<a){
    //for(b=2;b<=a)
    if(isprime(b));
    cout << b;
    b++;
}









}
