#include<iostream>
using namespace std;
int main(){
	int osum=0,rsum=0;
	int marks[5];
	cout<<"Enter the number\n";
	for(int a=0;a<5;a++){
		cin>>marks[a];
	} 
	system("cls");
		for(int a=0;a<5;a++){
			if(marks[a]%2==0){
				cout<<marks[a];
					osum+=a[marks];
			}
		
		}
			cout<<"\n even sum"<<osum<<endl;
			
		for(int a=0;a<5;a++){
		if(marks[a]%2){
				cout<<marks[a];
			rsum+=a[marks];
		}
		}
		cout<<"\n old sum"<<rsum<<endl;
}

