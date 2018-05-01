#include <iostream>
using namespace std;
class ship{
	private:
		//direction
		char name_ship;
		int degree;
		float minute;
		char direction;
		// ship_num
		static int ship_num;
	public:
		ship(){
			name_ship=0;
			degree=0;
			minute=0;
			direction=0;
			ship_num=0;
		}
		void get(){
			cout<<"name of ship: ";
			cin>>name_ship;
			ship_num++;
			cout<<"enter the position: \n";
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
		}
		void show(){
			cout<<"name of ship: "<<name_ship<<endl;
			cout<<"number of ship: "<<ship_num<<endl;
			cout<<"position of ship: "<<degree<<"\xF8"<<minute<<"'"<<direction<<endl<<endl;
		}
};
int ship::ship_num=0;
int main (){
	ship s1,s2,s3;
	cout<<"==>enter the informatio  of ship 1:\n";
	s1.get();
	cout<<"-------------------------------------\n";
	s1.show();
	cout<<"==>enter the informatio  of ship 2:\n";
	s2.get();
	cout<<"-------------------------------------\n";
	s2.show();
	cout<<"==>enter the informatio  of ship 3:\n";
	s3.get();
	cout<<"-------------------------------------\n";
	s3.show();
	return 0;
}
