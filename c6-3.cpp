#include <iostream>
#include <iomanip>
using namespace std;
class Time {
	private:
		unsigned int hour;
		unsigned int minute;
		unsigned int second;
	public:
		Time (){
			hour=0;
			minute=0;
			second=0;
		}
		void setTime (unsigned int h, unsigned int m, unsigned int s){// khoi tao co tham so
			hour=h;
			minute=m;
			second=s;
		}
		void add_time(Time t1,Time t2){
			second=t1.second+t2.second;
			if (second>59){
				second = second-60;
				minute++;
			}
			minute +=t1.minute+t2.minute;
			if (minute >59){
				minute =minute-60;
				hour++;
			}
			hour +=t1.hour+t2.hour;
			if (hour >23){
				hour-=24;
			}
		}
		void display_time (){
			cout<<hour<<":"<<minute<<":"<<second<<endl;
		}
};
int main (){
	Time t1,t2;
	Time t3;
	cout<<"time 1  : ";
	t1.setTime(12,30,56);
	t1.display_time();
	cout<<"time 2  : ";
	t2.setTime(1,23,16);
	t2.display_time();
	t3.add_time(t1,t2);
	cout<<"add time: ";
	t3.display_time();
	return 0;
}
