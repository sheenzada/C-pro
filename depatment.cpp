#include<iostream>
#include<windows.h>
using namespace std;
class change{
	public:
	int password;
	string dep;
	string mark;
	change(){
		password=1234;
		
		dep="aaaa\n";
		cout<<"wellcome\n";
	}
	void lalal(){
			cout<<"password\t"<<password<<endl;
		cin>>password;
		cout<<"dep\t"<<dep;
		cin>>dep;
		Sleep(3000);
		system("cls");
	cout<<"new password\t"<<password<<"\nnew dep\t"<<dep;
	}

			
};
int main(){
		for(int a=0;a<=100;a++){
				cout<<"\t\t"<<a<<"%\r";
			Sleep(300);
		}
		
}
 change stu;
 
