#include<iostream>
using namespace std;

int Search(int a[],int N,int low,int high){
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==N)
        return mid;
        else if(N>a[mid])
        low = mid+1; 
        else
        high = mid-1;
    }    
    mid = -1;
    return mid;
}
int main(){
    int mid, N,a[]={10,20,30,40,50};
    N = 0;
    int size = 5;
    int low =0, high=size - 1;
    mid = Search(a,N,low,high);
    cout<<mid;
    return 0;
}
