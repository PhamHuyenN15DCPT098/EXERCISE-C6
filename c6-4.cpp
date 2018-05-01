#include <iostream>
using namespace std;
class Employee{
	private:
		static int num_employee;
		float compensation;
	public:
		Employee(){
			num_employee=0;
			compensation=0.0;
		}
		void set_emp(){
			cin>>compensation;
			num_employee++;
		}
		void display(){
			cout<<"compensation: "<<compensation<<endl;
		}
		void display_num(){
			cout<<"employee: "<<num_employee<<endl;
		}
};
int Employee::num_employee=0;
int main(){
	Employee com1;
	Employee com2;
	Employee com3;
	cout<<"enter compensation of employee 1: ";
	com1.set_emp();
	com1.display_num();
	com1.display();
	cout<<"enter compensation of employee 2: ";
	com2.set_emp();
	com2.display_num();
	com2.display();
	cout<<"enter compensation of employee 3: ";
	com3.set_emp();
	com3.display_num();
	com3.display();
	return 0;
}
