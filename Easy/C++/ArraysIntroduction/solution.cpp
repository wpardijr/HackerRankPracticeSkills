#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int* arr = NULL;
    int i, n;

    cin >> n;

    arr = new int[n];

    for (i = 0; i < n; i++)
        arr[i] = 0;

    for (i = 0; i < n; i++)
        cin >> arr[i];

    for(; i > 0; i--)
    {
        cout << arr[i - 1];
        cout <<' ';
    }

    delete [] arr;

    arr = NULL;

    return 0;
}
