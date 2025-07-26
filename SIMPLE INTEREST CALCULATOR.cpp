//Library to calculate simple interest
#include <iostream>
using namespace std;

int main(){
// Variables to hold principal, interest, rate, and time
double P,I;
float R;
int T;

// Constant for division factor
const int div=100;

// Prompt user for input
cout<<"Please enter the loan amount"<<endl;
cin>>P;

// Check if the principal amount is valid
if (P <= 0) {
    cout << "Invalid principal amount. Please enter a positive value." << endl;
    return 1; // Exit the program with an error code
}

// Prompt user for interest rate and time
cout<<"Kindly provide the rate on the loan"<<endl;
cin>>R;

// Check if the interest rate is valid
if (R < 0) {
    cout << "Invalid interest rate. Please enter a non-negative value." << endl;
    return 1; // Exit the program with an error code
}

// Prompt user for time period
cout<<"Please enter the time"<<endl;
cin>>T;

// Check if the time period is valid
if (T <= 0) {
    cout << "Invalid time period. Please enter a positive value." << endl;
    return 1; // Exit the program with an error code
}

// Calculate simple interest using the formula I = (P * R * T) / div
I=(P*R*T)/div;

//output the calculated interest
cout<<"The interest on the loan is= "<<I<<endl;

// Indicate successful completion
cout<<"The program has completed successfully."<<endl;

 return 0;   
}
