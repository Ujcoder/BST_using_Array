#include<iostream>
using namespace std;

int BinarySearchTree(int A[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (A[m] == x)
            return m;
        if (A[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main(void)
{
    int A[20], i, n, x;
    cout << "Enter Size of Array   : ";    cin >> n;
    cout << "Enter Elements in Sorted Order  :  "<<endl;
    for (i = 0; i < n; i++)
        cin >> A[i];
    cout << "Enter the element to search: ";     cin >> x;
    int result = BinarySearchTree(A, 0, n - 1, x);
    if (result == -1)
        cout << "Element not found.........!";
    else
        cout << "Element found in index : " << result<<"\n" << "Element value is :  " << A[result];
    return 0;
}