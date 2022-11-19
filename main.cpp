#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//         1 ,if n = 0;
//  |n|          |n|
// f   =   1 / f   ,if n < 0;
//              (n-1)
//         f * f    ,if n > 0;

double Power(double f, int n){
	if (n == 0) return 1;


	else if (n < 0)
		return  1 / Power(f, abs(n));


	else
		return f * Power(f, (n-1));
}


main (){
	double n;
	int m;
	cout << "Number: ";
	cin >> n;
	cout << "Enter the power of the number: ";
	cin >> m;
	cout << "Power("<< n <<","<< m <<") = "<< setprecision(12) << Power(n,m) << endl;
	return 0;
}
