#include<iostream>
using namespace std;

int Search(int a[],int N,int low,int high){
    int mid = (low + high) /2;
    if(N==a[mid])
    return mid;
    else if(N<a[mid])
    return Search(a,N,low,mid);
    else 
    return Search(a,N,mid+1,high);
    return -1;
}
int main(){
    int N,a[]={10,20,30,40,50};
    N = 30;
    int size = sizeof(a);
    int mid,low =0, high=size - 1;
    Search(a,N,low,high);
    return 0;
}

