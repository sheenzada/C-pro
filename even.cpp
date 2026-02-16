#include<iostream>
using namespace std;
int main(){
	int a[2][2];
	cout<<"enter the numbers";
	cin>>a[0][0];
		cin>>a[0][1];
			cin>>a[1][0];
				cin>>a[1][1];
				//output
				cout<<"0 row 0 column = "<<a[0][0]<<endl;
		cout<<"0 row 1 column = "<<a[0][1]<<endl;
		cout<<"1 row 0 column = "<<a[1][0]<<endl;
			cout<<"1 row 1 column = "<<a[1][1]<<endl;
	}
