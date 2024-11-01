//Day 04: Conditional Statements
//Glossary/Technical Terms:

//? Conditional Statements: Statements that allow the program to execute certain code
//blocks based on whether a condition is true or false (`if`, `else if`, `else`).
//? Relational Operators: Operators that compare two values, such as `==` (equal to), `<`
//(less than), or `>` (greater than).
//? Boolean Expression: An expression that evaluates to either `true` or `false`.

//Scenario: Create a program that asks the user for a number and determines whether it is
//positive, negative, or zero.


#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter The Number : ";
	cin>>num;
	if(num > 0){
		cout<<"this Number is positive";
		
	}else if(num ==0){
		cout<<"this number is Zero";
		
	}else{
		cout<< "this number is negative";
	}
}
