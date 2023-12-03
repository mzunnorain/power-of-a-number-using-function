#include<iostream>
using namespace std;

int power(double a, int b);
int main()
{
	double number;
	int p;
	cout << "Enter the number :";
	cin >> number;
	cout << "Enter its power :";
	cin >> p;

	int raised_number = power(number, p);

	cout <<number<< " raised to power " << p << " is =" << raised_number<<endl;

	return 0;
}

int power(double number, int power)
{
	int raised=1;
	while (power >= 1)
	{
		raised = raised * number;
		power--;
	}
	return raised;

}