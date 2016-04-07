#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int celsius;
	cout << "Please enter temperature in celsius: \n";
	cin >> celsius;

	while(cin.fail())
	{
		cout << "I'm sorry. Please enter a whole number: \n";
		cin.clear();
		cin.ignore(256, '\n'); //pauses and waits for input. it is both a input and output buffer
		cin >> celsius;
	}

	int fahrenheit = celsius * 9 / 5 + 32;

	cout << "The temperautre is " << fahrenheit << " in fahrenheit. \n";


}