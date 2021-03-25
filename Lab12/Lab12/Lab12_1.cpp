#include <iostream>
#include <cmath>
using namespace std;
const float e = 2.718;
float sh(float x)
{
    return (pow(e, x) - pow(e, -x)) / (2);
}

int main()
{
    setlocale(0, "Rus");
    float x, y;
    cout << "¬ведите x : ";
    cin >> x;
    y = sh(x) * tan(x + 1) - pow(1 / tan(2 + sh(x - 1)), 2);
    cout << y << endl;
	system("pause");
}
