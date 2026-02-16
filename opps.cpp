#include<iostream>
using namespace std;
class intro{
	public:
	
	string name;
	
string fathername;

string password;

int phno;
void input(){
		cout<<"enter your name\n";
	cin>>name;
	cout<<"enter your father name\n";
	cin>>fathername;
	cout<<"enter your password\n";
	cin>>password;
	cout<<"enter your phone numbers\n";
	cin>>phno;
	
}

void output(){
	system("cls");
	cout<<"name :"<<name<<endl;
	cout<<"father name :"<<fathername<<endl;
	cout<<"password :"<<password<<endl;
	cout<<"phno :"<<phno<<endl;
}
};
int main(){
	intro hp;
	 hp.input();
 hp.output();
	

}
