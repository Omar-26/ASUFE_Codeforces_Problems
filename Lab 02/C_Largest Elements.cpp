#include <bits/stdc++.h>
using namespace std;

const int MAX_N_Element = 1000;
void k_largest_elements(int arr[], int array_size, int k);

///////////////////////////////

int main()
{
    int array_size, k;
    int arr[MAX_N_Element];
    cin >> array_size;
    cin >> k;
    for (int i = 0; i < array_size; i++)
        cin >> arr[i];
    k_largest_elements(arr, array_size, k);
}

///////////////////////////////
void k_largest_elements(int arr[], int array_size, int k)
{
    int swap = 0;
    for (int i = 0; i < array_size; i++)
    {
        for (int j = 0; j < array_size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";
}