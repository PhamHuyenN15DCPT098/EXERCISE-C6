#include <iostream>
#include <cmath>
using namespace std;
class fraction{
	private:
		int num;
		int den;
		char c;
	public:
		fraction(){
			num=0;
			den=1;
			c=0;
		}
		void get (){
			cin>>num;
			cin>>c;
			do{
				cin>>den;
				if (den==0){
					cout<<"denominator must be different from 0, please enter again: ";
					cin>>den;
				}
			}
			while (den==0);
		}
		void lowterm (){
			int tnum=labs(num);
			int tden=labs(den);
			int temp=0;
			int gcd;
			if (num==0)
			cout<<"0";
			while (tnum!=0){
				if (tnum<tden)
				{
					temp=tnum;
					tnum=tden;
					tden=temp;
				}
				tnum=tnum-tden;
			}
			gcd=tden;
			num=num/gcd;
			den=den/gcd;
		}
		int  get_num()
		{
			return num;
		}
		int get_den()
		{
			return den;
		}
		void show()
		{	
			if (num==den)
			cout<<"1";
			else
			cout<<num<<"/"<<den;
		}
		void fadd(fraction f1, fraction f2);
		void fsub(fraction f1, fraction f2);
		void fmul(fraction f1, fraction f2);
		void fdiv(fraction f1, fraction f2);
};
void fraction::fadd(fraction f1, fraction f2){
	num=f1.get_num()*f2.get_den()+f2.get_num()*f1.get_den();
	den=f1.get_den()*f2.get_den();
	lowterm();
	show();
}
void fraction::fsub(fraction f1, fraction f2){
	num=f1.get_num()*f2.get_den()-f2.get_num()*f1.get_den();
	den=f1.get_den()*f2.get_den();
	lowterm();
	show();
}
void fraction::fmul(fraction f1, fraction f2){
	num=f1.get_num()*f1.get_num();
	den=f2.get_den()*f2.get_den();
	lowterm();
	show();
}
void fraction::fdiv(fraction f1, fraction f2){
	num=f1.get_num()*f2.get_den();
	den=f1.get_den()*f2.get_num();
	lowterm();
	show();
}
int main(){
	fraction f1,f2,f3;
	char c_;
	cout<<"enter first fractions: ";
	f1.get();
	cout<<"enter second fractions: ";
	f2.get();
	cout<<"enter operation: ";
	cin>>c_;
	if (c_=='+')
		f3.fadd(f1,f2);
	if (c_=='-')
		f3.fsub(f1,f2);
	if (c_=='*')
		f3.fmul(f1,f2);
	if (c_=='/')
		f3.fdiv(f1,f2);
	return 0;
}
