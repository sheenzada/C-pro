#include<iostream>
using namespace std;
class id{
	public:
	string name;
	string cnic;
	void input(){
		cout<<"enter the name\ncnic"<<endl;\
		cin>>name>>cnic;
	}
	void output(){
		cout<<" name"<<name<<endl;
		cout<<" cinc"<<cnic;
	}
};
int main(){
	id naj;
	naj.input();
	naj.output();
}

