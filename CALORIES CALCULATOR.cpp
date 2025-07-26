// This program calculates the total number of bad calories from fat and sugar based on user input.
#include <iostream>
using namespace std;
void getWeight(double &weight) {
    do {
        cout << "Enter weight in pounds: ";
        cin >> weight;
        if (weight < 0) {
            cout << "Weight cannot be negative. Please try again." << endl;
        }
    } while (weight < 0);
}

double calculateCaloriesFat(double weight) {
    return weight * 4100;
}
double calculateCaloriesSugar(double weight) {
    return weight * 936;
}
double calculateBadCalories() {
    double fatWeight, sugarWeight;
    
    getWeight(fatWeight);
    getWeight(sugarWeight);
    
    double totalCalories = calculateCaloriesFat(fatWeight) + calculateCaloriesSugar(sugarWeight);
    return totalCalories;
}
int main() {
    double badCalories = calculateBadCalories();
    cout << "Total bad calories from fat and sugar: " << badCalories << endl;
    return 0;
}
