#include <iostream>
using namespace std;
class serial_number
{
	private:
		char name_object;
		static int serial_num;
	public:
		serial_number()
		{
			name_object=0;
			serial_num=0;	
		}
		void get()
		{
			cin>>name_object;
			serial_num++;
		}	
		void show()
		{
			cout<<"object: "<<name_object<<endl;
			cout<<"serial number: "<<serial_num<<endl;
		}
};
int serial_number::serial_num=0;
int main(){
	serial_number ob[3];
	int i;
	for (i=1;i<=3;i++){
		cout<<"enter the name of object "<<i<<": ";
		ob[i].get();
		ob[i].show();
	}
	return 0;
}
