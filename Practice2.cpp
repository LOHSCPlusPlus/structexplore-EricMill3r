#include <iostream>
using namespace std;

struct Point {
    string firstName;
    string secondName;
};






int main() {
	
  Point a; 
  a.firstName = "unknown";
  a.secondName = "unknown";

  Point b; 
  b.firstName = "unknown";
  b.secondName = "unknown";

  cout << "Point a: firstName = " << a.firstName << ", secondName = " << a.secondName  << endl;
  cout << "Point b: firstName= " << b.firstName << ", secondName = " << b. secondName << endl;


	return 0;
}
