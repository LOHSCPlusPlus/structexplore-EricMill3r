#include <iostream>
using namespace std;

struct Point {
  string firstName;
  string secondName;
  Point();
};
Point::Point() {
	// Normally, you do not print in a constructor
	firstName = "unknown";
	secondName = "unknown";
}





int main() {
	
  Point a; 
  Point b; 
  

  cout << "Point a: firstName = " << a.firstName << ", secondName = " << a.secondName  << endl;
  cout << "Point b: firstName= " << b.firstName << ", secondName = " << b. secondName << endl;


	return 0;
}
