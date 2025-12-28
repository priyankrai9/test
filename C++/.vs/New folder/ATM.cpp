#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float y;
    int x;
    cin>>x;
    cin>>y;
    if(x<y && x%5==0)
    cout<<setprecision(2)<<fixed<<y-x-0.5<<endl;
    else
    cout<<setprecision(2)<<fixed<<y<<endl;
    return 0;
}