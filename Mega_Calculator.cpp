#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){

string operator1;
bool menu = true; 
 string return1;

while (menu = true){
cout << "What is your operator? " << endl;

cout << "Type ? for available operators." << endl;

cin >> operator1;

 


// Options
    if (operator1 == "?"){
   
   menu = false;
   return1 = "null";

    cout << "Addition: + " << endl <<  "Subtraction: - " << endl << "Multiplication: * " << endl << "Division: / " << endl << "Exponent: ^ " << endl << "Square root: \"SQR\"" <<endl << "Cubed root: \"CUB\""<< endl << endl; 

    cout << "Type Enter to return to main menu. " <<endl;

    cin >> return1;

        if (return1 == "Enter" || return1 == "ENTER"){
        menu = true;    }


}

//Divison
if (operator1 == "division" || operator1 == "/"){
menu = false;
return1 = "null";
double num, denom;

cout << "Enter the numerator: ";
cin >> num;
cout << "Enter the denominator: ";
cin >> denom;

if (denom != 0){
    cout << "The quotient is " << num / denom << endl;
    }else {
cout << "Sorry, it's invalid to divide by 0." << endl;
}

cout << "Type Enter to solve another problem." <<endl;
cin >> return1;

if (return1 == "Enter"){
    menu == true;
}
}

//Multiplication
 else if (operator1 == "multiply" || operator1 == "multiplication" || operator1 == "x" || operator1 == "*"){
menu = false;
return1 = "null";
double multiplicand, multiplier;
cout << "What is the multiplicand? ";
cin >> multiplicand;
cout << "What is the multiplier? ";
cin >> multiplier;
cout << "The product is: " << multiplier * multiplicand <<endl;
cout << "Type Enter to solve another problem." <<endl;
cin >> return1;

if (return1 == "Enter"){
    menu == true;
}

}

//Addition
else if (operator1 == "addition" || operator1 == "+" || operator1 == "add" || operator1 == "Add"  ){
double addend1, addend2, summand;
return1 = "null";
menu = false;
cout << "Enter first Addend: ";
cin >> addend1;
cout<< "Enter second Added: ";
cin >> addend2;
summand = addend1 + addend2;
cout << "The sum is: " << summand <<endl;

cout << "Type Enter to solve another problem." <<endl;
cin >> return1;

if (return1 == "Enter"){
    menu == true;
}

}

//Subtraction
else if (operator1 == "subtraction" || operator1 == "Subtraction" || operator1 == "-" || operator1 == "subtract" || operator1 == "Subtract"  ){
double minued, subtrahend, difference;
return1 = "null";
menu = false;
cout << "Enter the minued: ";
cin >> minued;
cout<< "Enter the subtrahend: ";
cin >> subtrahend;
difference = minued - subtrahend;
cout << "The sum is: " << difference <<endl <<endl;

cout << "Type Enter to solve another problem." <<endl;
cin >> return1;

if (return1 == "Enter"){
    menu == true;
}

}

//Exponent
else if (operator1 == "exponent" || operator1 == "Exponent" || operator1 == "EXPONENT" || operator1 == "^"){

double base, exponent, power;
menu = false;
return1 = "null";
cout << "Enter the base: ";
cin >> base;
cout << "Enter the exponent: ";
cin >> exponent;
power = pow(base, exponent);
cout << "The power is: " << power <<endl <<endl;

cout << "Type Enter to solve another problem." <<endl;
cin >> return1;

if (return1 == "Enter"){
    menu == true;
}
}

//Square Root
else if (operator1 == "SQR" || operator1 =="sqr" || operator1 == "Sqr"){
double radicand, square;
menu = false;
return1 = "null";
cout << "Enter the radicand: ";
cin >> radicand;
square = sqrt(radicand);
cout << "The square is: " << square <<endl <<endl;

cout << "Type Enter to solve another problem." <<endl;
cin >> return1;

if (return1 == "Enter"){
    menu == true;
}
}

//Cubed Root
else if (operator1 == "CUB" || operator1 == "cub" || operator1 == "Cub"){
    double radicand, cube;
    return1 = "null";
    menu = false;
    cout << "Enter the radicand: ";
    cin >> radicand;
    cube = cbrt(radicand);
    cout << "The cube is: " << cube <<endl <<endl;

    cout << "Type Enter to solve another problem." <<endl;
cin >> return1;

if (return1 == "Enter"){
    menu == true;
}
}




}
}