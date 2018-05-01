#include <iostream>
using namespace std;
enum etype{laborer,	secretary, manager};
char arr[3][10]={"laborer", "secretary","manager"};
class date{
	private:
			int day;
			int month;
			int year;
	public:
		void getdate (int d,int m, int y){
			day=d;
			month=m;
			year=y;
		}
		void showdate (){
			cout<<"date: "<<day<<'/'<<month<<'/'<<year<<endl;
		}
		int check(){
			int check =0;
			if (year < 0)
			{
				cout<<"value of year must be higher than 0 "<<endl;
				check=1;
			}
			if (month<0 || month >12){
				cout<<"Value of month is from 1 to 12, please enter again."<<endl;
				check=1;
			}
			switch (month){
				case 1: case 3: case 5: case 7: case 8:  case 10: case 12:
					if (day<1 ||day >31){
						cout<<"With month are: 1,3,5,7,8,10,12, value of day is from 1 to 31, please enter again."<<endl;
						check=1;
					}
						break;
				case 4: case 6: case 9: case 11:
					if (day<1 || day>30){
						cout<<"With month are: 4,6,11, value of day is from 1 to 30, please enter again."<<endl;
						check=1;
					}
					break;
				case 2:
					if ((year %4==0 && year %100!= 0) || year %400==0){ 
						if (day <0 || day >29){ 
						cout<<"With leap year and month is 2, value of day is from 1 to 29, please enter again."<<endl;
						check=1;
						break;
						}
					}
					else 
						{
						if (day <0 || day >28){
						cout<<"With month is 2, value of day is from 1 to 28, please enter again."<<endl;
						check=1;
						break;
						}	
						}
					}
				return check;
			}
};
class employee{
	private:
			etype type_e;
			int salary;
	public:
		void get_employ_type(char t){
			switch (t){
				case('l'):
					type_e=laborer;
					break;
				case('s'):
					type_e=secretary;
					break;
				case ('m'):
					type_e=manager;
					break;
				default:
					cout<<"value is not available, please enter again: "<<endl;
			}
		}
		void get_employ_sala (int sala){
			salary=sala;
		}
		int check_sala (){
			int check=0; 
			if (salary<0){
				cout<<"value of salary must be higher than 0, please enter again: ";
				check=1;
			}
			return check;
		}
		void show_employ(){
			cout<<"type: "<<arr[type_e]<<endl;
			cout<<"salary: "<<salary<<endl;
		}
};
int main (){
	employee emp1[3];
	etype etype_;
	char t;// first letter
	char dummychar;
	int salary;
	date Date[3];
	int check1=0, check2=0,d,m,y;// day, month, year
	for(int i=1;i<=3;i++){
		do {
			cout<<"enter the date of employee "<<i<<" : ";
			cin>>d>>dummychar>>m>>dummychar>>y;
			Date[i].getdate(d,m,y);
			check1=Date[i].check();
		}
		while (check1==1);
		do{
			cout<<"enter the first letter: ";
			cin>>t;
			emp1[i].get_employ_type(t);	
		}
		while (t!='s' && t!='m' && t!='l');
		do{
			cout<<"enter the salary: ";
			cin>>salary;
			emp1[i].get_employ_sala(salary);	
			check2=emp1[i].check_sala();
		}
		while (check2==1);
	}
	for (int i=1;i<=3;i++){
		cout<<"data of employee "<<i<<" : "<<endl;
		Date[i].showdate();
		emp1[i].show_employ(); 
	}
	return 0;
}
