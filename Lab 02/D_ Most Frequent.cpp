// #include <bits/stdc++.h>
// using namespace std;

// const int MAX_N_Element = 1001;
// int most_frequent_element(int array[], int array_size);
// ///////////////////////////////
// int main()
// {
//     int arr[MAX_N_Element];
//     int size_arr;
//     cin >> size_arr;
//     for (int i = 0; i < size_arr; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << most_frequent_element(arr, size_arr);
// }

// ///////////////////////////////
// int most_frequent_element(int array[], int array_size)
// {
//     int i = 0, j = 0, max_count = 0, count = 0, y = 0;

//     for (i = 0; i < array_size; i++)
//     {
//         for (j = 0; j < i; j++)
//         {
//             if (array[i] == array[j])
//                 count++;
//         }
//         if (count > max_count)
//         {
//             max_count = count;
//             y = array[i];
//         }
//         count = 0;
//     }
//     return y;
// }
#include <bits/stdc++.h>
using namespace std;
#define nn << "\n"
#define ee << " " <<
#define ee_ << " "
#define ll long long
#define foor(i, kk, n) for (int i = kk; i < n; i++)
int most_frequent_element(int a[], int n)
{
    int b[501] = {0}, mx = 0, ans = 0;
    foor(i, 0, n)
    {
        b[a[i]]++;
        if (b[a[i]] > mx)
        {
            mx = b[a[i]];
            ans = a[i];
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    foor(i, 0, n) cin >> a[i];
    sort(a, a + n);
    cout  ee_ "oh my god " nn ;
    cout << most_frequent_element(a, n);
    return 0;
}