/*
2. WAP to convert given degree celsius temperature into
fahrenheit and convert that fahrenheit temperature
into kelvin by implementing multilevel inheritance:
Class P -> Class Q -> Class R
- Class P has following members: temperature
attribute in float
- Class Q has following members: toFehrenheit()
method
- Class R has following members: toKelvin() method
° F = ( °C × 9/5 ) + 32
Output:
enter celcius: 30
the farenhit is: 86
*/
#include<iostream>
using namespace std;

class X{
	public:
		int c,f;
};
class Y: public X
{public:
	
	void celcius(){
		cout<<"enter celcius: ";
		cin>>c;
	}
		
};
class Z: public Y
{
	public:
		
	void farenhit(){
		cout<<"the farenhit is: "<<c*9/5+ 32;
		
	}
};

int main(){
	
	Z z1;
	z1.celcius();
	z1.farenhit();

}
