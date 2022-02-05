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


void ChangeLastName(Point Person, string lastName){

lastName = "Torvalds";

Person;
Person.secondName = lastName; 

Person.secondName = lastName;

cout << Person.secondName << endl;

}


void PrintPerson(Point Person){


cout << "Point Person: firstName = " << Person.firstName << ", secondName = " << Person.secondName  << endl;
}

int main() {
	
  Point Person;
  Person.firstName = "Eric";
  Person.secondName = "Miller";

  PrintPerson(Point Person);
  ChangeLastName(Point Person, string lastName);
	return 0;
}
