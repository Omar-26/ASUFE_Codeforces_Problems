#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n % m == 0)
        cout << 1;
    else
        cout << 0;
    return 0;
}
