#include <cmath>
using namespace std;
double findFirstRoot(double a, double b, double c) {
	return ((-1*b + sqrt(b*b -4*a*c))/(2*a));
}
double findSecRoot(double a, double b, double c) {
	return ((-1*b - sqrt(b*b -4*a*c))/(2*a));
}