
#include <iostream>
using namespace std;
struct Point {
	double x;
	double y;
	Point();
};
Point::Point() {
	// Normally, you do not print in a constructor
	cout << "In the constructor" << endl;
	x = 0;
	y = 0;
}

int main() {




	return 0;
}


