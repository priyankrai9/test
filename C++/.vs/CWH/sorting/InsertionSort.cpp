
#include <iostream>
using namespace std;
void Insertion(int *arr, int num)
{
    int i, j, temp;
    int *a = arr;
    int s = num;
    int key;
    i = 0;
    // cout << "size=" << s << endl;
    // a[]={7,3,9,1,5,4}
    for (j = 1; j < s; j++)
    {
        key = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
    // i=0;
    // cout<<a[i]<<"\t"<<a[i+1]<<endl;
    for (i = 0; i < s; i++)
    {
        // cout<<"inside 2 for";
        cout << a[i] << "\t";
    }
    // return a;
}
int main()
{
    int len, size, i, j;

    i = 0;

    cout << "enter size of array" << endl;
    cin >> size;
    int *arr = new int[size];
    len = size;
    cout << "enter elemetns of array";
    while (len--)
    {
        cin >> arr[i];
        // ++i;
        // cout<<"elements added"<<arr[i]<<endl;
        ++i;
    }
    cout << "called sort func";
    Insertion(arr, size);
}