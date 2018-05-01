#include <iostream>
using namespace std;
class angle{
	private: 
		int degree;
		float minute;
		char direction;
	public:
		angle (){
			degree=0;
			minute =0;
			direction=0;
		}
		void get_angle (int de,float m,char di){
			degree=de;
			minute=m;
			direction=di;
		}
		void show_angle (){
			cout<<degree<<'\xF8'<<minute<<"'"<<direction;
		}
};
int main (){
	angle angle1;
	int degree;
	float minute;
	char direction;
	cout<<"enter the angle: "<<endl;
	do{
		cout<<"degree: ";
		cin>>degree;
		if(degree<0 || degree>180)
		{
			cout<<"value is not available, please enter again: ";
			cin>>degree;
		}
	}
	while (degree<0 || degree>180);
	do{
		cout<<"minute: ";
		cin>>minute;
		if(minute<0 || minute>60)
		{
			cout<<"value is not available, please enter again: ";
			cin>>minute;
		}
	}
	while (minute<0 || minute>60);
	do{
		cout<<"direction: ";
		cin>>direction;
		if(!(direction=='s' || direction=='n'|| direction=='w'|| direction=='e'))
		{
			cout<<"value is not available, please enter again: ";
			cin>>direction;
		}
	}
	while(!(direction=='s' || direction=='n'|| direction=='w'|| direction=='e'));
	if (direction=='s' || direction=='n'|| direction=='w'|| direction=='e')
	direction= direction-32;
	angle1.get_angle(degree,minute,direction);
	angle1.show_angle();
	return 0;
} 
