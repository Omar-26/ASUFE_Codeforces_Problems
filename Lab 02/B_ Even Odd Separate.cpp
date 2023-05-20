#include <bits/stdc++.h>
#include <vector>
using namespace std;

const int MAX_N_Element = 1000;
void even_num(int array[], int array_size);
void odd_num(int array[], int array_size);

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
    even_num(arr, size_arr);
    cout << endl;
    odd_num(arr, size_arr);
}

///////////////////////////////
void even_num(int array[], int array_size)
{
    for (int i = 0; i < array_size; i++)
        if (array[i] % 2 == 0)
        {
            cout << array[i] << " ";
        }
}
void odd_num(int array[], int array_size)
{
    for (int i = 0; i < array_size; i++)
        if (array[i] % 2 != 0)
        {
            cout << array[i] << " ";
        }
}
