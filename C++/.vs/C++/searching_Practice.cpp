// binary search and linear search
#include <iostream>
using namespace std;
int LinearSearch(int *p1, int n, int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (p1[i] == n)
            return i;
    }
    return -1;
}
int binarySearch(int *p2, int n, int size)
{
    int low, mid, high, i;
    low = 0;
    high = size - 1;
    // mid = (low + high) / 2;
    while (low < high)
    {
        mid=(low+high)/2;
        if (p2[mid] == n)
            return mid;
        else if (p2[mid] > n) high =mid-1;
        else if(p2[mid]<n)low = mid+1;
        else return -1;
    }
    return mid;
}
int main()
{
    int a[] = {5, 4, 8, 2, 7};
    int b[] = {10, 20, 30, 40, 50};
    int L = LinearSearch(a, 2, 5);
    cout << "Linear Search: " << L << endl;
    int B = binarySearch(b, 40, 5);
    cout << "Binary search: " << B << endl;
    return 0;
}