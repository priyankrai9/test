#include <iostream>
using namespace std;
void Bubble(int *arr, int size)
{
    int i, j, temp;
    int *a = arr;
    int s = size;
    cout << "size=" << s << endl;
    for (j = 0; j < s; j++)
    {
        for (i = 0; i < s - 1; i++)
        {
            // for(j=0
            //  cout<<"inside first for";
            if ((*(a + i)) > (*(a + i + 1)))
            {
                // cout<<a[i]<<"\t"<<a[i+1]<<endl;
                temp = *(a + i);
                *(a + i) = (*(a + i + 1));
                *(a + i + 1) = temp;
            }
        }
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
    Bubble(arr, size);
}