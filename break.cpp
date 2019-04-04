#include<iostream>
using namespace std;
void for_loop(){
	for(int i=0;i<=10;i++){
		for(int j=1;j<5;j++){
			if(j==3&&i==8){
				break;
			}
			cout<<i<<" "<<j<<endl;
		}
	}
}
int main(){
    for(int i=0;i<=10;i++){
	if(i==5){
            break;
	}
	cout<<i<<endl;
    }
    for_loop();
    return 0;
}

