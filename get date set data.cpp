#include<iostream>
using namespace std;
class computer{
	public:
string model;
int price;
void setdata(){
	cout<<"\tenter the model&price";
	cin>>model>>price;
}
	void getdate(){
		cout<<"enter the model="<<model;
		cout<<"enter the price="<<price;
	}

};
int main(){
	
	computer hp;
	hp.setdata();
	hp.getdata();
}



