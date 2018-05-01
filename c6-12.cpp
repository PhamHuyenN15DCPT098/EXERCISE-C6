#include <iostream>
#include <cmath>
#include <iomanip>
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
		void set (int n, int d, char dumychar)
		{
			num=n;
			den=d;
			c=dumychar;
		}
		int  get_num()
		{
			return num;
		}
		int get_den()
		{
			return den;
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
		void show()
		{
			cout<<num<<c<<den<<"\t";
		}
		void multi_fraction ()
		{	
			den=get_den();
			set(1, den,'/');
			num=get_num();
			int i,j;
			fraction A[10];
			fraction B[100];
			fraction temp;
			int tnum=num;
			int tden=den;
			temp.set(tnum,tden,'/');
			for (i=1;i<den;i++)
			{	
				tnum=num*i;
				tden=den;
				temp.set(tnum,tden,'/');
				temp.lowterm();
				A[i]=temp;
				A[i].show();		
			}
			cout<<endl;
			for (i=1;i<den;i++)
			{	A[i].show();
				for (j=1;j<den;j++)
				{
					tnum=A[j].get_num()*A[i].get_num();
					tden=A[j].get_den()*A[i].get_den();
					temp.set(tnum,tden,'/');	
					temp.lowterm();
					B[j]=temp;
					B[j].show();	
				}
				cout<<endl;
			}
		}
		
};
int main (){
	fraction f1;
	int den;
	cout<<"enter denominator: ";
	cin>>den;
	f1.set(1,den,'/');
	f1.multi_fraction();
	return 0;
}
