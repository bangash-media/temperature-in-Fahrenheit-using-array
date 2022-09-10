#include <iostream>

using namespace std;
/*Take five inputs (temperature in Fahrenheit) from the user then convert the temperatures
to Celsius and store them in another array. Display both the arrays in the form of a table
having two columns, one for the temperature in Fahrenheit and the other in Celsius.*/
int main() 
{
	double fahren[5],celcius[5]; //variable declaration
	for(int i=0;i<5;i++) //loop for input tempreture
	{
		cout<<"Fahrenheit Tempreture "<<i+1<<" = "; cin>>fahren[i];
	}
	for(int i=0; i<5;i++) //loop for conversion of F TO C and storing it
	{
		celcius[i]=5 * (fahren[i]- 32) / 9;
		//cout<<celcius[i]<<" ";
	}
	cout<<endl<<endl;
	cout<<"TEPRETURE IN FAHRENHEIT    |    TEMPRETURE IN CELCIUS"; //titiles
	cout<<endl;
	for(int i=0;i<5;i++) //loop for the table. in columns
	{
		cout<<"	"<<fahren[i]<<"		   |		"<<celcius[i]<<endl;
	}
	
	return 0;
}
