#include<iostream>
using namespace std;
int main(){
    long long int number,sum=0;
    
    cin>>number;
    if(number<10^18){
    while(number){
    sum+=number%10;
    number=number/10;
    }
    cout<<sum;}
    // else
    // cout<<""
}