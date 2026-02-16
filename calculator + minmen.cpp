#include<iostream>
using namespace std;
int sum( int w,int e){
	return w+e;
}
int diff (int w,int e){
	return w-e;
}
int proud (int w,int e){
	return w*e;
}
int mod (int w,int e){
	return w%e;
}
int div (int w,int e){
	return w/e;
}

int main(){
	int w,e;
	cout<<"Enter two number \n";
	cin>>w>>e;
	char op;
	cout<<"Enter opeator\n";
	cin>>op;
	if (op=='+'){
		cout<<"sum =="<<sum(w,e);
	}
		else if (op =='-'){
			cout<<"diff ="<<diff(w,e);
		}
			else if (op=='*'){
				cout<<"proud ="<<(w,e);
			}
				else if (op == '/'){
					cout<<"div ="<<(w,e);
				}
					else if (op == '%'){
				    	cout<<"mod ="<<w,e;	
				    }
				    return 0;
					}
					
						
