#include <bits/stdc++.h>
#include <vector>
using namespace std;

const int MAX_N_Element = 1000;
int getAbsSum(int arr[], int size_arr);
///////////////////////////////
int main()
{
    int size_arr;
    int arr[MAX_N_Element];
    cin >> size_arr;
    int x = 0;
    while (x < size_arr)
    {
        cin >> arr[x];
        x++;
    }
    cout << getAbsSum(arr, size_arr);
}

///////////////////////////////
int getAbsSum(int arr[], int size_arr)
{
    int sum = 0;
    int SUM;
    for (int i = 0; i < size_arr; i++)
        SUM = ((arr[i] > 0) ? sum += arr[i] : sum -= arr[i]);
    return SUM;
}
