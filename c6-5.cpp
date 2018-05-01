#include <iostream>
using namespace std;
class date {
	private:
		unsigned int day;
		unsigned int month;
		unsigned int year;
	public:
		date(){
			day=0;
			month=0;
			year=0;
		}
		void setdate(unsigned int d,unsigned int m,unsigned int y){
			day=d;
			month=m;
			year=y;
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
		void showdate(char c){
			if (year<10){
				cout<<day<<c<<month<<c<<"0"<<year;
			}
			else
			cout<<day<<c<<month<<c<<year;
		}
};
int main(){
	date d1;
	int d,m,y, check=0;
	char c;
	do 
	{
		cout<<"enter date: ";
		cin>>d>>c>>m>>c>>y;
		d1.setdate(d,m,y);
		check=d1.check();
	}
	while (check==1);
	d1.showdate(c);
	return 0;
}
