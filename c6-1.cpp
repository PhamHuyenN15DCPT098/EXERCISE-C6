#include <iostream>
using namespace std;
class Int {
	private:
		int number;
	public:
		Int() : number(0)
		{}
		Int (int num) : number(num)
		{}
		
		Int add_(Int num1,Int num2){
			return num1.number+num2.number;
		}
		void show(){
			cout<<number;
		}
};
int main(){
	Int num1,num2,sum=0;
	num1= Int(3);
	num2= Int(4);
	sum=sum.add_(num1,num2);
	sum.show();
	return 0;
}
