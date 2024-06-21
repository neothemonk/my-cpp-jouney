
/*Write a program that inputs three integers from the 
keyboard and print the sum, average, product, smallest, and 
largest of these numbers.

void arithmetic_smallest_largest(){
    int num1, num2, num3;
    int sum, average, product, smallest, largest;
    std::cout << "Input three different integers: ";
    std::cin >> num1 >> num2 >> num3;
    sum = num1 + num2 + num3;
    std::cout << "Sum is: " << sum << std::endl;
    average = (num1 + num2 + num3) / 3;
    std::cout << "Average is: " << average << std::endl;
    product = num1 * num2 * num3;
    std::cout << "Product is: " << product << std::endl;
    if (num1 < num2 and num1 < num3){
        smallest = num1;
    }
    else if (num2 < num1 and num2 < num3){
        smallest = num2;
    }
    else
    {
        smallest = num3;
    }
    std::cout << "Smallest is: " << smallest << std::endl;
    if (num1 > num2 and num1 > num3){
        largest = num1;
    }
    else if (num2 > num1 and num2 > num3)
    {
        largest = num2;
    }
    else largest = num3;
    std::cout << "Largest is: " << largest << std::endl;
}
*/

/* Write a program that reads in two integers and determines and prints if the first is a multiple of the second.

void multiples(){
    int num1, num2;
    std::cout << "Enter two different numbers: ";
    std::cin >> num1 >> num2;
    if (num2 % num1 == 0){
        std::cout << "The second number is indeed a multiple of the first number.";
    }
    else
        std::cout << "The second number is not a multiple of the first number.";
}
*/

/* Write a program that inputs a five digit integer, separates the integer into its digits and print them separated by three spaces each.

void digits_of_an_integer(){
    int number;
    std::cout << "Enter you number: ";
    std::cin >> number;
    int first, second, third, fourth, fifth;
    first = number % 10;
    second = (number % 100) / 10;
    third = (number % 1000) / 100;
    fourth = (number % 10000) / 1000;
    fifth = (number % 100000) / 10000;
    std::cout << fifth << "   " << fourth << "   " << third << "   " << second << "   " << first << endl;
}
*/

/* Create a BMI calculator application that reads the user's weight in kilograms and height in meters then calculates and displays the user's body mass index.

void bmi_calculator(){
    double weight, height, bmi;
    std::cout << "Enter your weight in KG: ";
    std::cin >> weight;
    std::cout << "Enter your height in meters: ";
    std:cin >> height;
    bmi = weight / (height * height);
    if (bmi < 18.5){
        std::cout << "Your BMI is " << bmi << ". You are underweight.";
    }
    else if (18.5 <= bmi <= 24.9){
        std::cout << "Your BMI is " << bmi << ". You are normal.";
    }
    else if (25 <= bmi <= 29.9){
        std::cout << "Your BMI is " << bmi << ". You are overweight.";
    }
    else{
        std::cout << "Your BMI is " << bmi << ". You are obese.";
    }
}
*/

/* In this challenge, a farmer is asking you to tell him how many legs can be counted among all his animals. The farmer breeds three species:
chickens = 2 legs
cows = 4 legs
pigs = 4 legs
The farmer has counted his animals and he gives you a subtotal for each species. You have to implement a function that returns the total number of legs of all the animals.
The order of animals passed is animals(chickens, cows, pigs).
Examples
animals(2, 3, 5) ➞ 36
animals(1, 2, 3) ➞ 22
animals(5, 2, 8) ➞ 50

int animals(int chicken, int cows, int pigs){
    int result;
    result = (chicken * 2) + (cows * 4) + (pigs * 4);
    return result;
}
*/

// in t c++, there is a ternary operator for using instead of if else statements:
// first you write a condition then a question mark then write what should happen if that condition is true and the a colon then write what should happen if that condition is not true.
// condition ? expression_if_true : expression_if_false;

#include <iostream>
int main(){
    std::cout<<"this was day-5"<<std::endl;
}
