#include <iostream>
using namespace std;
int main()
{
    char x ;
    cin >> x ;
    cout << char( x < 122 ? (x+1) : (97) );
}