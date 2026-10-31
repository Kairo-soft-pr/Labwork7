//task6
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float min_x, max_x, h, x, y;
	cout << "Enter min_x, max_x, h";
	cin >> min_x >> max_x >> h;
	x = min_x;
	while (x <= max_x + h / 2) {
		y = x * x;
		cout << setw(5) << x << setw(5) << y << endl;
		x += h;
	}
	return 0;
}