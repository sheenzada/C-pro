#include<iostream>
using namespace std;
class traval{
	public:
	int op;
	int cnic;
	int phone;
	string name;
	int tikit;
	traval(){
		cout<<"**********************Wellcome***********************\n";
		cout<<"**********************FullTun compouny******************\n";
		option();
}
void option(){
	cout<<"1 skardu to lahor\n";
	cout<<"2 khp to skardu\n";
	cout<<"3 lahour to khp\n";
	cin>>op;
	if(op==1){
		tickit(1000);
	}
	
	else if(op==2){
	tickit(2000);	
	}
	
	else if(op==3){
		tickit(3000);
	}
	
	option();
}
void tickit(int amount){
	cout<<"name\n"<<name;
	cin>>name;
	cout<<"cnic\n"<<cnic;
	cin>>cnic;
	cout<<"phone\n"<<phone;
	cin>>phone;
	cout<<"no of tikit\n";
	cin>>tikit;
	cout<<"You are successfuly join to fulltun compouny";
	cout<<"\nname:"<<name;
	cout<<"\ncinc:"<<name;
	cout<<"\nphone:"<<name;
	cout<<"no of tikit="<<tikit;
	cout<<"amount:"<<tikit*amount;
}
};
int main(){
	traval tra;
}




