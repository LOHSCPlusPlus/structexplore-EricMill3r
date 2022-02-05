#include <iostream>
using namespace std;

struct Point {
  string firstName;
  string secondName;
  Point();
  Point(string x, string y);
};
Point::Point() {
	// Normally, you do not print in a constructor
	firstName = "unknown";
	secondName = "unknown";
}
Point::Point(string x, string y) {

	firstName = x;
	secondName = y;
}



int main() {
	
  Point a; 
  Point b; 
  b.firstName = "Linus";
  b.secondName = "VanPelt";

  cout << "Point a: firstName = " << a.firstName << ", secondName = " << a.secondName  << endl;
  cout << "Point b: firstName= " << b.firstName << ", secondName = " << b. secondName << endl;


	return 0;
}
