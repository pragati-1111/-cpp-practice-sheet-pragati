//wap a c++ programme that takes a positive integer input from user
//finds and prints all the factor of that number
//display the total number of factor 
//checks whether the number is prime or not

#include<iostream>
using namespace std;
int main(){

    int num,fact=1 ,count=0;

    cout<<"enter the number:=";
    cin>>num;

    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            cout << i << " "; 
            count++;          
        }
    }
    cout << endl<<"Total factors: " << count << endl;

    if(count == 2) {
        cout << "Number is prime." << endl;
    } else {
        cout << "Number is not prime " << endl;
    }
 return 0;
}