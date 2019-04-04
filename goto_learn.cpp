#include<iostream>
using namespace std;
int main(){
gotoschool:
	cout<<"you can go to schools"<<endl;
cout<<"input your age"<<endl;
int age;
cin>>age;
if(age>=7&&age<=10){
	goto gotoschool;
}
else{
	cout<<"you can goto work"<<endl;
}
return 0;
}
