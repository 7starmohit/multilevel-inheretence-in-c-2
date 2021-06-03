#include<iostream>
#include<cmath>
using namespace std;
class simple_calc{
	int a,b;
	public:
		void set_data_simple(){
			cout<<"enter the value for a:"<<endl;
			cin>>a;
			cout<<"enter the value for b:"<<endl;
			cin>>b;
		}
		void display_simple(){
			cout<<"the sum of two numbers is :"<<a+b<<endl;
			cout<<"the substraction of two numbers is :"<<a-b<<endl;
			cout<<"the multiply of two numbers is :"<<a*b<<endl;
			cout<<"the devide of two numbers is :"<<a/b<<endl;
		}
};


class scientific_calc{
		int a,b;
	public:
		void set_data_sci(){
			cout<<"enter the value for a:"<<endl;
			cin>>a;
			cout<<"enter the value for b:"<<endl;
			cin>>b;
		}
		void display_sci(){
			cout<<"the value of tan(a) :"<<tan(a)<<endl;
			cout<<"the value of sin(b)"<<sin(b)<<endl;
			cout<<"the value of exp a is "<<exp(a)<<endl;
			cout<<"the value of cos(a) is "<<cos(a)<<endl;
		}
	
};

class hybrid:public simple_calc,public scientific_calc{
	
};
int main(){
	hybrid q1;
	q1.set_data_simple();
	q1.display_simple();
	q1.set_data_sci();
	q1.display_sci();
	return 0;
}
