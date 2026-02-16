#include<iostream>
using namespace std;
int main(){
	int t[3][3];
	cout<<"entr the numbers";
	cin>>t[0][0];
	cin>>t[0][1];
	cin>>t[0][2];
	cin>>t[1][0];
	cin>>t[1][1];
	cin>>t[1][2];
	cin>>t[2][0];
	cin>>t[2][1];
	cin>>t[2][2];
	//output 
	cout<<"0 row to 0 column = "<<t[0][0]<<endl;
	cout<<"0 row to 1 column = "<<t[0][1]<<endl;
	cout<<"0 row to 2 column = "<<t[0][2]<<endl;
	cout<<"1 row to 0 column = "<<t[1][0]<<endl;
	cout<<"1 row to 1 column = "<<t[1][1]<<endl;
	cout<<"1 row to 2 column = "<<t[1][2]<<endl;
	cout<<"2 row to 0 column = "<<t[2][0]<<endl;
	cout<<"2 row to 1 column = "<<t[2][1]<<endl;
	cout<<"2 row to 2 column = "<<t[2][2]<<endl;
	}
