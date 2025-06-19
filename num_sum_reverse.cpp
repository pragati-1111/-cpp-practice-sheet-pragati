#include<iostream>
using namespace std;

int main(){

    int num,count=0,sum=0,digit,rev=0;

    cout<<"enter the number=";
    cin>>num;

    while(num>0){
        digit=sum%10;
        sum=sum+digit;
        rev=rev*10+digit;
        num=num/10;
        count++;

        cout<<"the digit of number:="<<num<<endl;
        cout<<"sum of digit:="<<sum<<endl;
        cout<<"reaverse of number"<<rev<<endl;

        if(num==rev){
            cout<<"the num is palidrone"<<endl;
            cout<<"the num is not palidrone"<<endl;


        }

    }

    return 0;
}