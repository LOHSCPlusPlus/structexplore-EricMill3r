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

void PrintPerson(string Person){


cout << "Point Person: firstName = " << Person << ", secondName = " << Person<< endl;
}

int main() {
	
  Point Person;


  void PrintPerson(string Person);
	return 0;
}
