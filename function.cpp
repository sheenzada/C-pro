#include<iostream>
using namespace std;

void swapNums(int &a , int &b){
    int c = a;
    a=b;
    b=c;
}
int main(){
    int FirstNum = 10 ;
    int SecondNum = 20 ;

    cout<<"Before swap :"<<endl;
    cout<<FirstNum<<SecondNum<<endl;

    swapNums(FirstNum , SecondNum);

    cout<<"after swap :"<<endl;
    cout<<FirstNum<<SecondNum <<endl;
    
    return 0;
}