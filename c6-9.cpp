#include <iostream>
using namespace std;
class fraction{
	private:
		int numberator;
		int denominator;
		char c;
	public:
		fraction(){
			numberator=0;
			denominator=1;
		}
		void get(){
			cin>>numberator;
			cin>>c;
			do{
				cin>>denominator;
				if (denominator==0){
					cout<<"denominator must be different from 0, please enter again: ";
					cin>>denominator;
				}
			}
			while (denominator==0);
		}
		void show()
		{
			cout<<numberator<<c<<denominator<<endl;
		}
};
int main(){
	fraction f1;
	char answer;
	do{
		cout<<"enter the fraction: ";
		f1.get();
		f1.show();
		cout<<"Do you want to continue?"<<endl;
		cout<<"Press 'y' if your answer is YES."<<endl;
		cout<<"Press 'n' if your answer is NO."<<endl;
		cin>>answer;
	} while (answer=='y');
	return 0;
}
