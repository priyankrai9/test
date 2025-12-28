#include<iostream>
using namespace std;
// in Binary search three scenarios will be there
// 1- if arr[mid]== number then return mid;
// 2- arr[mid]> number then  high = mid-1;
// 3- arr[mid]< number then low = mid +1;
int binary(int *arr,int num,int len){
    int low,mid,high,size;
    low = 0;
    high =len-1;
    //mid=(low+high)/2;
    while(low<high){
        mid=(low+high)/2;
        if(arr[mid]==num) return mid;
        else if(arr[mid]>num) {
            high = mid-1;
        }
        else low=mid+1;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,6};
    int index,n=3;
    int length=5;
    index=(binary(arr,n,length));
    cout << index ;
    if(index==-1) cout<<"element not found";
}