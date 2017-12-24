#include <iostream>
#include <exception>
using namespace std;
int main(){
	double a = 0;
	double b = 0;
	double c = 0;
	cout << " ax^2 + bx + c"<<endl;
	try {
		cout <<"Enter value for a: "
		cin >> a;
		cout <<"Enter value for b: "
		cin >> b;
		cout <<"Enter value for c: "
		cin >> c;
		if (!cin.isgood() ){
			throw runtime_error("Bad value.");
		}
	}
	catch {runtime_error(e.what());}
}