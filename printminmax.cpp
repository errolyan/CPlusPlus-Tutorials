#include <iostream>  
using namespace std;  
void  printMin(int arr[5]);  
void printmax(int arr[5]);
int main()  
{  
    int arr1[5] = { 30, 10, 20, 40, 50 };    
    int arr2[5] = { 5, 15, 25, 35, 45 };    
    printMin(arr1);//passing array to function    
    printMin(arr2);
    printmax(arr1);
    printmax(arr2);  
}  
void  printMin(int arr[5])  
{  
    int min = arr[0];    
    for (int i = 0; i < 5; i++)    
    {    
        if (min > arr[i])    
        {    
            min = arr[i];    
        }    
    }    
    cout<< "Minimum element is: "<< min <<"\n";    
}

void printmax(int arr[5]){
    int max = arr[0];    
    for (int i = 0; i < 5; i++)
    {    
        if (max < arr[i]) 
        {    
            max =  arr[i];    
        }    
    }
    cout<< "maxmum element is: "<< max <<"\n";    
}

