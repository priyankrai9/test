#include<iostream>
using namespace std;
int selectionSort(int a[],int N){
    int i,j,m;
    for(i=0;i<N-1;i++){
        m=i;
        for(j=i+1;j<N;j++){
            if(a[m]>a[j]){
                m=j;
            }
        }
        swap(a[m],a[i]);
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
    int a[]={2,6,5,1,9,3};
    int N=6;
    selectionSort(a,N);
    
    return 0;
}
