#include<iostream>
using namespace std;
int main(){
    int num1, num2, addresult, productresults;
    cout <<"enter a number: ";
    cin>> num1;
    cout<< "enter a second number: ";
    cin>> num2;
    addresult = num1 + num2;
    productresults = num1 * num2;
    cout<< num1 <<" + " <<num2 <<" = " <<addresult <<endl <<num1 <<" * " <<num2 <<" = " <<productresults; 
    return 0;
}