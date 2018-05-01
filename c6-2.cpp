#include <iostream>
#include <conio.h>
using namespace std;
class tollBooth{
	private:
		unsigned int cars;
		unsigned int nopay_cars;
		double money;
	public:
		tollBooth()
		{	cars=0;
			money=0.0;
			nopay_cars=0;
		} 
		void pay(){
			cars++;
			money+=0.5;
		}
		void nopay(){
			cars++;
			nopay_cars++;
		}
		int show(){
			cout<<"\nTotal of cars: "<<cars<<endl;
			cout<<"Total of nopay cars: "<<nopay_cars<<endl;
			cout<<"Total of money: "<<money;
		}
};
int main (){
	cout<<"enter p for a paying car"<<endl;
	cout<<"enter n for a nonpaying car"<<endl;
	char c;
	tollBooth Booth;
	while (1){// nen dung do while
		c=getche();
		if (c=='p') 
			Booth.pay();
		else if(c=='n')
			Booth.nopay();
		else if(c==27 || c==13)
		{	
			Booth.show();
			return 0;
		}	
	}		
}
