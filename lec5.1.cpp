/*
1. WAP to find sum of all three number’s cubes by
implementing single level inheritance: Class X->Class Y
- Class X has following members: a, b & c attributes in
integer data type
- Class Y has following members: setData() and
getData() methods
Output:
enter value of A: 2
enter value of B: 5
enter value of C: 7
the cube of A: 8
the cube of B: 125
the cube of C: 343
*/
#include<iostream>
using namespace std;

class X{
	public:
		int a,b,c;
		
		void data(){
		
		
		cout<<"enter value of A: ";
		cin>>a;
		cout<<"enter value of B: ";
		cin>>b;
		cout<<"enter value of C: ";
		cin>>c;
		
		cout<<"the cube of A: "<<a*a*a<<endl;
		cout<<"the cube of B: "<<b*b*b<<endl;
		cout<<"the cube of C: "<<c*c*c<<endl;
	}		
};
class Y: public X
{
		
};

int main(){
	
	Y y1;
	y1.data();

}
