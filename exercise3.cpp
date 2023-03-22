#include <iostream>
using namespace std;
int main (){
	
	float a;
	float tax;
	
	cout<<"enter your salary";
	cin>>a;
	
	if (a>=0 && a<=100000){
		
		
		cout<<"no tax";
		
		
	}
 if (a>=100001&&a<=150000){
		
	tax= 0.15 * a;	
		
		cout<<tax;	
		
	}
	
 if (a>=150001&&a<=1000000){
		
		tax=0.25*a;
		cout<<tax;
	}
	else{
		
		
		tax=0.3*a;
	}
	
	
	return 0;
}
