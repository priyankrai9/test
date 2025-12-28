#include <iostream>
using namespace std;
// 0 1 1 2 3 5 8 13 ........
int fib(int n)
{
    if (n == 0||n==1)
        return n;
    else
    {    
    n = fib(n - 1) + fib(n - 2);
}
return n;
}

int main()
{
    // int fib(int);
    // int n=8;
    // cin>>n;
    // int i,j;
    // int *arr=new int(n);
    // i=0,j=1;
    // arr[i]=i;
    // arr[j]=j;
    // while(j!=n-1){
    // arr[j+1]=arr[j]+arr[j-1];
    // j++;
    // }
    // for(i=0;i<n;i++){
    // cout<< arr[i]<<"\t";
    // }
    int n=9;
    for(int i=0;i<n;i++)
        cout<<fib(i);

    return 0;
}
