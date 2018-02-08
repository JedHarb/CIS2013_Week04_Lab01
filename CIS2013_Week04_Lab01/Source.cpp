#include<iostream>
using namespace std;


//global variables, not defined in the "main" blocks of code. Can be used everywhere, just don't redefine it or it could get confusing
int largeNumber = 1000;

// learning about functions. Functions are like pre-set calculators. Feed something in, something else comes out, but the calculator stays the same and can be repeatedly used.

// "void" is the return type, printStuff is the name, and between parenthesis is the input value
void printStuff(int num) //save this block of code called printStuff. the return type "void" means we don't have to specify a return type like that "return 0;" that we put at the end of the main code
{
	cout << "Print Stuff" << (num * 5) << endl;
}

//now that the void function printStuff has been defined, you can call it in the main code
int main()
{
	for (int i = 0; i < 10; i++)
	{
		printStuff(i); //call that "void printStuff" block of code here. feed i into it
	}

	printStuff(1000);

	int a;  // have to declare this so the cin on the next line is valid
	cin >> a; //this line exists so the program won't close automatically
	return 0;
}

// CIS2013_Week04_Homework1 
// update calculator instead of + - * / make them functions. Add a modulus % operator and also write a sqr rt function
// CIS2013_Week04_Homework2
// Update blackjack to use functions and have it print out (include 2-10 j Q K A) have RNG print 1-13, set 1 to ace and 11-13 to equal to face cards, and have ace equal 11 (unless it would put that over 21 then make it equal 1