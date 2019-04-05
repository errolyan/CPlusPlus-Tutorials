#include<iostream>
using namespace std;

void Nodigui(int number){
	int n1=0;
	int n2=1;
	int n3,i;
	cout<<n1<<" "<<n2<<" ";
	for (i=2; i<number;i++){
	n3 = n2+n1;
	cout<<n3<<" ";
	n1 =n2;
	n2 =n3;
	}
	cout<<endl;
}
void printFibonacci(int n){    
    static int n1=0, n2=1, n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         cout<<n3<<" ";    
         printFibonacci(n-1);   
	}
}

int main(){
	int n;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Fibonacci Series:";
	cout<<"0 "<<"1 ";
	printFibonacci(n-2);
	Nodigui(n);
	return 0;
} 
