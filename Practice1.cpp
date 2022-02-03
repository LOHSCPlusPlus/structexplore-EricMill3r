#include <iostream>
using namespace std;

struct Point {
    string firstName;
    string secondName;
};






int main() {
	
  Point a; 
  a.firstName = "Dorian";
  a.secondName = "Gray";

  Point b; 
  b.firstName = "Charlie";
  b.secondName = "Brown";

  cout << "Point a: firstName = " << a.firstName << ", secondName = " << a.secondName  << endl;
  cout << "Point b: firstName= " << b.firstName << ", secondName = " << b. secondName << endl;


	return 0;
}
