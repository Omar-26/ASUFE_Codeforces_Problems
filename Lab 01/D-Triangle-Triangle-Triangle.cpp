#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float side1, Angle2, Angle3;
    const double PI = 3.14159265 ;
    cin >> side1 >> Angle2 >> Angle3;
    float Angle1 = 180 - (Angle2 + Angle3);
    float side2 = side1 * (sin(Angle2 * PI / 180) / sin(Angle1 * PI / 180));
    float side3 = side1 * (sin(Angle3 * PI / 180) / sin(Angle1 * PI / 180));
    cout << Angle1 << "\n";
    cout << side2 << "\n";
    cout << side3 << "\n";
}