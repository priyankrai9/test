#include <iostream>
using namespace std;
int main()
{
    int i, num, length;
    // int arr[length];
    i = 0;
    cout<< "enter length"<<endl;
    cin >> length;
    int* arr = new int[length];
    cout<<"enter elements"<<endl;
    while (length--)
    {
        cin>>*(arr+i);
        ++i;
    }
    cout<<"array elements are: "<<endl;
    // arr[0]<<endl;
    // cout<<arr[1]<<"\t";
    // cout<<arr[2]<<"\t";
    // cout<<arr[3]<<"\t";
    // cout<<arr[4]<<"\t";
    // for(i=0;i<length;i++){
        // cout<<*(arr+i);
    // }
    cout<<"enter elements to be searched"<<endl;
    cin>>num;
    i=0;
    while(*(arr+i)!=NULL)
    {
        if (*(arr+i) == num){
            cout<<"index is at"<<" "<<i;
            return 0;
            }
            else ++i;
    }
    cout<<"element not found";
    return 0;
}