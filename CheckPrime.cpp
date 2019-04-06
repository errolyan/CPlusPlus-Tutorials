#include<iostream>
using namespace std;

void chek_prime (int n){
int m = n/2;
int flag = 0;
for (int i=2;i<=m;i++)
{
	if(n%2 == 0)
	{
		cout<<"Number is not Prime."<<endl;
		flag=1;
		break;
	}
}
if(flag==0)
	cout<<"Number is Prime"<<endl;
}

int main(){
cout<<"please input your number:"<<endl;
int Num;
cin>>Num;
chek_prime(Num);
return 0;
}
