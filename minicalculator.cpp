/*
 * minicalculator.cpp
 *
 *  Created on: Jan 16, 2023
 *  Author: Abdullah Ahmed
 *  IDE Used: Eclipse
 */

/*
 * Develop a mini calculator in c++ which performs various operators such as addition, subtraction, multiplication, and division
 * Each function should take two parameters and return the result
 * The main function should prompt the user to input two numbers and to choose an operation
 * Display a menu of operations for the user to choose from
 */

#include <iostream>
using namespace std;

// Function prototypes
float addTwo(float, float);
float subtractTwo(float, float);
float multiplyTwo(float, float);
float divideTwo(float, float);

/*
 * Description:
 * Welcomes the user to the mini calculator
 * Asks the user to enter two numbers and an operation
 * If the operation is invalid, the user is forced to enter a valid operation
 * Based on the operation entered by the user, the program performs the arithmetic
 * The output is then displayed
 */
int main()
{
	cout << "Welcome to my mini calculator!" << endl;
	cout << "Here are four operations to choose from: " << endl;
	cout << "\t1. Addition" << endl;
	cout << "\t2. Subtraction" << endl;
	cout << "\t3. Multiplication" << endl;
	cout << "\t4. Division" << endl;

	int userChoice = 0 , exitOrContinue = 1;   // userChoice is the variable to use for the switch statement
	float num1, num2;

	while(exitOrContinue!= 0) {
		cout << "Enter two numbers: " << endl;
		cin >> num1 >> num2;

		cout << "Choose an operation" << endl;
		cin >> userChoice;



while(num2 == 0 && userChoice == 4)
{
	cout << "Divide by 0 isn't possible, try again!" << endl;
	cin >> num2;
}

		// Force the user to enter a valid operation
		while (userChoice != 1 && userChoice != 2 && userChoice != 3 && userChoice != 4)
			{
				cout << "Enter a valid operation since you entered something invalid" << endl;
				cin >> userChoice;
			}


		// Switch statement is used to determine which operation to perform based on the user's input.
		switch(userChoice) {
				case 1:
				{
					float sum = addTwo(num1, num2);
					cout << "Sum is: " << sum << endl;
					break;
				}

				case 2:
				{
					float difference = subtractTwo(num1, num2);
					cout << "Difference is: " << difference << endl;
					break;
				}

				case 3:
				{
					float product = multiplyTwo(num1, num2);
					cout << "Product is: " << product << endl;
					break;
				}

				case 4:
				{
					float quotient = divideTwo(num1, num2);
					cout << "Quotient is: " << quotient << endl;
					break;
				}

			}

			cout << "If you want to continue, press 1 otherwise press 0" << endl;
			cin >> exitOrContinue;

	}



	// End of program
	cout << "Thank you for trying my mini calculator!" << endl;





	// terminate
	return 0;
}

/*
 * Description:
 * This function takes two numbers entered by the user and outputs the sum.
 *
 * Input:
 * Two floats which are num1 and num2
 *
 * Output:
 * Displays the sum of the two numbers
 */
float addTwo(float num1, float num2)
{
	float result = num1 + num2;
	return result;
}

/*
 * Description:
 * This function takes two numbers entered by the user and displays the difference
 *
 * Input:
 * Two floats which are num1 and num2
 *
 * Output:
 * Displays the difference of the two numbers
 */
float subtractTwo(float num1, float num2)
{
	float result = num1 - num2;
	return result;
}

/*
 * Description:
 * This function takes two numbers entered by the user and displays the product
 *
 * Input:
 * Two floats which are num1 and num2
 *
 * Output:
 * Displays the product of the two numbers
 */
float multiplyTwo(float num1, float num2)
{
	float result = num1 * num2;
	return result;
}

/*
 * Description:
 * This function takes two numbers entered by the user and displays the quotient.
 *
 * Input:
 * Two floats entered by the user which are num1 and num2
 *
 * Output:
 * Displays the quotient of the two numbers
 */

float divideTwo(float num1, float num2)
{
	float result = float(num1) / float(num2);
	return result;
}







