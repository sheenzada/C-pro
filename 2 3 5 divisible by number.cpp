 #include<iostream>
using namespace std;
int main () {
	int a;
	cout<<"enter the number\n";
	cin>>a;
	 if(a%2==0&&a%3==0&&a%5==0){
	    cout<<a<<"a is divisible by 2 & 3 &5";
	}
		else if(a%2==0&&a%5==0){
	    cout<<a<<"a is divisible by 2 & 5";
	}
	else if(a%2==0&&a%3==0){
	    cout<<a<<"a is divisible by 2 & 3";
	}
	else if (a%3==0&&a%5==0){
		cout<<a<<"a is divisible by 3 & 5";
	}
	else if(a%2==0){
		cout<<a<<" a is divisible by 2";
	}
	else if(a%3==0){
		cout<<a<<"a is divisible by 3";
	}
	else if (a%5==0){
		cout<<a<<"a is divisible by 5";
	}
	else{
		cout<<a<<"a is not divisible by 2 3 5";
	}
}
