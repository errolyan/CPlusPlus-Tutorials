#include<iostream>
using namespace std;
// definte function
void function(){
	static int i=0;
	int j=0;
	i++;
	j++;
	cout<<"i="<<i<<"and j="<<j<<endl;
}
int main(){
	function();
	function();
	return 0;
}
