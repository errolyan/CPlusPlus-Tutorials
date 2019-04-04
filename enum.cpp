#include<iostream>
using namespace std;
enum week {Mon,Tus,Wed,Thu,Fri,Sat,Sun};
int main(){
	week day;
	day = Fri;
	cout<<"Day:  "<<day+1<<endl;
	cout<<"Day:  "<<day+2<<endl;
	cout<<"Day+3 "<<day+3<<endl;
	return 0;
}
