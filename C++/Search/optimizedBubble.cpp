#include<iostream>
using namespace std;
int bubbleSort(int a[],int N){
    int i,j;
    bool sorted;
    for(i=0;i<N-1;i++){
        sorted = false;
        for(j=0;j<N-i-1;j++){
            if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            sorted = true;
            }
        }
        if(sorted == false){
            exit;
        }
    }
    for(int i=0;i<N;i++)
    cout<<a[i];
    return 0;
}
int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    //cout<<"swap"<< *a  << *b;
    return 0;
}
int main(){
    int a[]={1,3,4,7,8,9};
    int N=6;
    bubbleSort(a,N);
    
    return 0;
}
