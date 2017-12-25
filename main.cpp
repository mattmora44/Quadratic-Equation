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
		if (!cin.isgood() || !){
			throw runtime_error("Bad value.");
		}
	}
	double x1 = 0.0;
	double x2 = 0.0;
	cout << "roots of "<< a << "x^2 + ("<< b <<")x + ("<< c <<") :"<<endl;
	//linear
	if (a == 0){
		x1 = findLroots(b,c);
		cout << "x = "<< x1<<endl;
	}
	//2 real roots
	if (b*b-4*a*c > 0){
		x1 = findFirstroot(a,b,c);
		x2 = findSecRoot(a,b,c);
		cout <<"x1: "<<x1<<endl<<"x2: "<<x2<<endl;S
	}
	//idendical roots
	if (b*b-4*a*c == 0){

	}
	//imaginary roots
	if (b*b-4*a*c < 0){

	}

	catch (runtime_error& e){
		cout<<endl<<e.what()<<endl;
	}
}