#include<iostream>
//#include(stdio.h)
#include<algorithm>
using namespace std;

/*int Search(int *a,int N,int low,int high){
    int mid = (low + high)/2;
    if(N==a[mid])
    return mid;
    else if(N>a[high] || N < a[low]){
        return -1;
    }
    else if(N<a[mid]&&low<=mid)
    return Search(a,N,low,mid);
    else if(N>a[mid] && mid<=high)
    return Search(a,N,mid+1,high);
    else
    return -1;
}
int main(){
    int mid, N,a[]={10,20,30,40,50};
    N = 60;
    int size = sizeof(a);
    int low =0, high=size - 1;
    mid = Search(a,N,low,high);
    cout<<mid;
    return 0;
}*/
int reverse(string &str){
    int i,j;
    j=str.length();
    for(i=0;i<j/2;i++){
        swap(str[i],str[j-i-1]);
    }
    cout<<str;
}
string swap(char &c1,char &c2){
    char *temp;
    temp = &c1;
    c1=c2;
    c2= *temp;
}
int main(){
    string str;
    //cin>>str;
    str="hello";
    reverse(str);
    //reverse(str.begin(),str.end());
    //cout<< str;
    //printf("%s",&str);
}
