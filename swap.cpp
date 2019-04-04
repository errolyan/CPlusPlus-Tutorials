#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int swap = *a;
	*a = *b;
	*b = swap;
}

int main(){
int x=100,y= 200;
swap(x,y);
cout << "x is"<<x<<endl;
cout << "y is"<<y<<endl;
swap(&x,&y);
cout << "x is"<<x<<endl;
cout << "y is"<<y<<endl;
}
