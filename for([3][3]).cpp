#include<iostream>
using namespace std;
int main(){
	int arr[3][3];
	for(int a=0;a<3;a++){
		for(int b=0;b<3;b++){
			cin>>arr[b][a];
		}
	}
	cout<<"\n output";
	for(int a=0;a<3;a++){
		for(int b=0;b<3;b++){
		cout<<arr[a][b]<<"\t";
		}
		cout<<endl;	
	}
}
