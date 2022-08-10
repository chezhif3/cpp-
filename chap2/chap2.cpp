#include<iostream>
using namespace std;

void mice();
void run();
double Centi2Fahren(double);
double ToAstro(double);
void showTime(int, int);

int main()
{
	
	cout << "Name: Che" << endl;
	cout << "Address: 52072" << endl;

	system("pause");

	double distance;

	cout << "Pleas enter a distance in [long]: " ;
	cin >> distance;
	distance = distance * 220;
	cout << "The distance is " << distance << " [yard]" << endl;

	system("pause");

	mice();
	mice();
	run();
	run();

	system("pause");

	int age;
	int months;

	cout << "Enter your age: " ;
	cin >> age;

	months = 12 * age;

	cout << "You have been lived in this world " << months << " months!" << endl;

	system("pause");

	double centi;
	double fahren;
	cout << "Please enter a Celsius value: " ;
	cin >> centi;
	fahren = Centi2Fahren(centi);
	cout << centi << " degrees Celsius is " << fahren << " degrees Fahrenheit." << endl;

	system("pause");

	double dist1;
	double dist2;
	cout << "Enter the number of light years: ";
	cin >> dist1;
	dist2 = ToAstro(dist1);
	cout << dist1 << " light years = " << dist2 << " astronomical units." << endl;
	
	system("pause");

	int hr;
	int min;
	cout << "Enter the number of hours: ";
	cin >> hr;
	cout << "Enter the number of minutes: ";
	cin >> min;
	showTime(hr, min);

	system("pause");

	return 0;
}

void mice()
{
	cout << "Three blind mice" << endl;
}

void run()
{
	cout << "See how they run" << endl;
}

double Centi2Fahren(double centi)
{
	double fahren;
	fahren = 1.8 * centi + 32;

	return fahren;
}

double ToAstro(double LightYears)
{
	double unit;
	unit = 63240 * LightYears;

	return unit;
}

void showTime(int hr, int min)
{
	cout << "Time: " << hr << " : " << min << endl;
}
