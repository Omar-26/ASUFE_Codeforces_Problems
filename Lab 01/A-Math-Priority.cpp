#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) << "\n"
         << (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) << "\n";
}