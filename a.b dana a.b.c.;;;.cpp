#include<iostream>
using namespace std;
int main(){
	for(char i='a';i<='d';i++){
		for(char o='a';o<=i;o++){
			cout<<"*"<<"\t";
		}
		cout<<endl;
	}
}
