#include<iostream>
using namespace std;
class intro{
	public:
	string name;
string fathername;
string password;
string school;
int phno;
void input(){
	cout<<"enter your name"<<endl;
	cin>>name;
	cout<<"enter your father name"<<endl;
	cin>>fathername;
	cout<<"enter your phno"<<endl;
	cin>>phno;
	cout<<"enter your school name\n";
	cin>>school;
	  input();
}
void output(){
	cout<<name<<fathername<<password<<school<<phno;
}
};
int main(){
	 input();
    

	

}
