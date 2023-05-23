#include <bits/stdc++.h>
using namespace std;

const int MAX_N_Element = 1001;
int most_frequent_element(int array[], int array_size);
///////////////////////////////
int main()
{
    int arr[MAX_N_Element];
    int size_arr;
    cin >> size_arr;
    for (int i = 0; i < size_arr; i++)
    {
        cin >> arr[i];
    }
    cout << most_frequent_element(arr, size_arr);
}

///////////////////////////////
int most_frequent_element(int array[], int array_size)
{
    int i = 0, j = 0, max_count = 0, count = 0, y = 0;

    for (i = 0; i < array_size; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (array[i] == array[j])
                count++;
        }
        if (count > max_count)
        {
            max_count = count;
            y = array[i];
        }
        count = 0;
    }
    return y;
}
