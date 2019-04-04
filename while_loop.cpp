#include<iostream>
using namespace std;
int main(){
int a = 10;
while (a>0){
	cout<<a<<endl;
	--a;
}
do{
   cout<<a<<endl;
   a++;
}while(a<=10);
do{
   cout<<"hello world"<<endl;
}while(true);
return 0;
}

