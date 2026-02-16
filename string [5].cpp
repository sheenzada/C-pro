#include<iostream>
using namespace std;
struct empoly{
	int id;
	string name;
	string cnic;
	string phone;
};
int main(){
	empoly emp[5];
		for(int a=0;a<2;a++){
			cout<<"\nenter record of empoly  "<<a+1<<endl;
			cout<<"\nenter  empoly id  \n";
			cin>>emp [a].id;
			cout<<"\nenter  empoly name  \n";
		cin>>emp [a].name;
		cout<<"\nenter  empoly cinc \n";	
		cin>>emp [a].cnic;
			cout<<"\nenter  empoly phone \n";
		cin>>emp [a].phone;
	}
	system("cls");
	cout<<"id \tname \t"<<"cinc \t"<<"phone \n";
	for(int a=0;a<2;a++){
		cout<<emp [a].id<<"\t";
			cout<<emp [a].name<<"\t";
		cout<<emp [a].cnic<<"\t";
		cout<<emp [a].phone<<"\t";
		cout<<endl;
	}

	
}
