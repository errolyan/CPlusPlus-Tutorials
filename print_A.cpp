#include <iostream>  
using namespace std;  
int main()  
{  
    char ch='A';    
    int i, j, k, m;    
    for(i=1;i<=5;i++)    
    {    
        for(j=5;j>=i;j--)    
            cout<<" ";    
        for(k=1;k<=i;k++)    
            cout<<ch++;    
            ch--;    
        for(m=1;m<i;m++)    
            cout<<--ch;    
        cout<<"\n";    
        ch='A';    
    }
    int l,n;    
    cout<<"Enter the Range=";    
    cin>>n;    
    for(i=1;i<=n;i++)    
    {    
        for(j=1;j<=n-i;j++)    
        {    
            cout<<" ";    
        }    
        for(k=1;k<=i;k++)    
        {    
            cout<<k;    
        }    
        for(l=i-1;l>=1;l--)    
        {    
            cout<<l;    
        }    
        cout<<"\n";    
	}
    return 0;
}    
