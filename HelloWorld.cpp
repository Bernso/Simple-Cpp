#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <list>
#include <numeric>

// Makes it so that you do not have to type 'std::' when using the equivilent of the print() and input() funtion in python
using namespace std;

/*


cout		= c ouput
cin			= c input
short		= used for small integers from -32768 to 32767
long		= used for large intigers
long long	= used fot very large intigers
const		= makes it so that the variable value will not change
double		= decimal number
int			= whole number
//			= make a comment
/*			= make a large comment cover multiple lines
float		= composed of a number that is not an integer (When using make sure to put 'F' after the value as otherwise it will treat it as a double, e.g. 'value1 = 3.14F')
long		= a 4 byte variable that lets you store far larger numbers (but in return this takes up a lot more storage, also when using you have to put an L after the value just like with a float)
char		= a character
bool		= true, false
auto		= automatically assigns a data-type to a variable
binary		= to use binary use '0b{YOURBINARY}' does not have to be in curly brackets
hexadecimal	= to use a hexadecimal number use '0x{YOURHEXADECIMAL}' does not have to be in curly brackets
unsigned	= this makes a value stay positive, it cannot be negative
time		= this uses the seconds it has been since Jan 1st 1970
srand		= sets the starting point for producing a series of pseudo-random integers
while		= runs the code in the block while the statement is true
for			= runs the code in the block until the statement is no longer true
pair		= allows you to use two values at the same time
sum			= this function gets all the intigers beneath the number and adds them all up (sum) 


*/


// When writing a function, make sure it is outside of the 'main' function
void myFistFunction() {
	cout << "beans" << endl;
}


// Used in function based addition
int addition(int x, int y) {
	//cout << x << " + " << y << " = " << x + y << endl; // Alternative
	return x + y;
}


// Used in changing the parameters
string youCanChangeTheParameter(string beans = "beans") {
	//cout << beans << endl;
	return beans;
}

// Used in number swapping with functions
pair<int, int> swapNumbers(int& number1, int& number2) {
	int temp = number1;
	number1 = number2;
	number2 = temp;
	return make_pair(number1, number2);
}

// Used in Printing all values in the list
void myFunction(int myNumbers[5]) {
	for (int i = 0; i < 5; i++) {
		cout << myNumbers[i] << "\n";
	}
}

// Used in intiger and double addition
int plusFunc(int x, int y) {
	return x + y;
}

// Used in intiger and double addition
double plusFunc(double x, double y) {
	return x + y;
}

// Used in the sum of a number
int sum(int k) {

	if (k > 0) {
		return k + sum(k - 1);
	}

	else {
		return 0;
	}

}

class firstClass {
public:
	void firstMethod() {
		cout << "Hello guys, " << "this is my first method!" 
			<< endl;
	}
	void secondMethod();
};

// Creates the method outside of the class so it is easier to see what is going on inside the class
void firstClass::secondMethod() {
	cout << "hi" << endl;
}


int calculator() {
	int operatorToUse;

	cout << "What would you like to do?" << endl << endl
		<< "1. Addition" << endl
		<< "2. Subtraction" << endl
		<< "3. Multiplication" << endl
		<< "4. Division" << endl << endl;

	cin >> operatorToUse;

	if (operatorToUse == 1) {
		int numbersToUseAddition;
		cout << "Enter the amount of numbers to use: ";
		cin >> numbersToUseAddition;

		if (numbersToUseAddition == 0) {
			cout << endl << "Why did you even select addition if your not going to add anything? :skull:" << endl;
		}

		else {
			list<int> numbersToAdd;
			for (numbersToUseAddition; numbersToUseAddition != 0; numbersToUseAddition -= 1) {
				if (numbersToUseAddition < numbersToUseAddition - 1) {
					int newNum;
					cout << "Enter another number: ";
					cin >> newNum;

					numbersToAdd.push_back(newNum);
				}
				else {
					int newNum;
					cout << "Enter a number: ";
					cin >> newNum;

					numbersToAdd.push_back(newNum);
				}
			}
			cout << endl;
			int answerAddition = accumulate(numbersToAdd.begin(), numbersToAdd.end(), 0);
			cout << "Your answer is: " << answerAddition;
		}
	}

	else if (operatorToUse == 2) {
		int numbersToUseSubtraction;
		cout << "Enter the amount of numbers to use: ";
		cin >> numbersToUseSubtraction;

		if (numbersToUseSubtraction == 0) {
			cout << endl << "Why did you even select addition if your not going to add anything? :skull:" << endl;
		}

		else {
			list<int> numbersToSubtract;
			for (numbersToUseSubtraction; numbersToUseSubtraction != 0; numbersToUseSubtraction -= 1) {
				if (numbersToUseSubtraction < numbersToUseSubtraction - 1) {
					int newNum;
					cout << "Enter another number: ";
					cin >> newNum;

					numbersToSubtract.push_back(newNum);
				}
				else {
					int newNum;
					cout << "Enter a number: ";
					cin >> newNum;

					numbersToSubtract.push_back(newNum);
				}
			}
			cout << endl;
			int result = 0;
			if (!numbersToSubtract.empty()) {
				result = numbersToSubtract.front(); // Start with the first element
				numbersToSubtract.pop_front(); // Remove the first element

				for (int num : numbersToSubtract) {
					result -= num; // Subtract each of the remaining elements
				}
			}

			int answerAddition = accumulate(numbersToSubtract.begin(), numbersToSubtract.end(), 0);
			cout << "Your answer is: " << answerAddition;
		}
	}

	else if (operatorToUse == 3) {
		int numbersToUseMultiplication;
		cout << "Enter the amount of numbers to use: ";
		cin >> numbersToUseMultiplication;

		if (numbersToUseMultiplication == 0) {
			cout << endl << "Why did you even select addition if your not going to add anything? :skull:" << endl;
		}

		else {
			list<int> numbersToAdd;
			for (numbersToUseMultiplication; numbersToUseMultiplication != 0; numbersToUseMultiplication -= 1) {
				if (numbersToUseMultiplication < numbersToUseMultiplication - 1) {
					int newNum;
					cout << "Enter another number: ";
					cin >> newNum;

					numbersToAdd.push_back(newNum);
				}
				else {
					int newNum;
					cout << "Enter a number: ";
					cin >> newNum;

					numbersToAdd.push_back(newNum);
				}
			}
			cout << endl;
			int answerAddition = accumulate(numbersToAdd.begin(), numbersToAdd.end(), 0);
			cout << "Your answer is: " << answerAddition;
		}
	}

	else if (operatorToUse == 4) {
		int numbersToUseDivision;
		cout << "Enter the amount of numbers to use: ";
		cin >> numbersToUseDivision;

		if (numbersToUseDivision == 0) {
			cout << endl << "Why did you even select addition if your not going to add anything? :skull:" << endl;
		}

		else {
			list<int> numbersToAdd;
			for (numbersToUseDivision; numbersToUseDivision != 0; numbersToUseDivision -= 1) {
				if (numbersToUseDivision < numbersToUseDivision - 1) {
					int newNum;
					cout << "Enter another number: ";
					cin >> newNum;

					numbersToAdd.push_back(newNum);
				}
				else {
					int newNum;
					cout << "Enter a number: ";
					cin >> newNum;

					numbersToAdd.push_back(newNum);
				}
			}
			cout << endl;
			int answerAddition = accumulate(numbersToAdd.begin(), numbersToAdd.end(), 0);
			cout << "Your answer is: " << answerAddition;
		}
	}
	else {
		system("CLS");
		cout << "Bro, just enter an option :skull:" << endl << endl;
		calculator();
	}
	return 0;
}




int main() {

	calculator();
	return 0;


	/*
	// Refreshing memory a bit more aswell
	for (int q = 1; q <= 100; q += 1) {
		cout << "Vishwa is a monkey " << q << endl;
	}
	return 0;
	*/


	/*
	firstClass firstObject;		// Create the object 
	firstObject.firstMethod();	// Call the method from inside the object

	firstClass secondObject;
	secondObject.secondMethod();
	return 0;
	*/


	/*
	// Refreshing my memory
	cout << "Enter a number: " << endl;
	int number1;
	cin >> number1;

	cout << "Enter another number: " << endl;
	int number2;
	cin >> number2;

	cout << endl 
		<< number1 << " + " << number2 << " = "
		<< number1 + number2
		<< endl;
	return 0;
	*/



	/*
	// Adds up all the intigers less than x (the sum)
	int result = sum(1000);
	cout << result;
	return 0;
	*/
	

	/*
	// 
	int myNum1 = plusFunc(8, 5);
	double myNum2 = plusFunc(4.3, 6.26);
	cout << "Int: " << myNum1 << endl;
	cout << "Double: " << myNum2;
	return 0;
	*/


	/*
	// Prints all the values in the list
	int myNumbers[5] = {10, 20, 30, 40, 50};
	myFunction(myNumbers);
	return 0;
	*/


	/*
	// Number swapper with functions
	int num1;
	cout << "Enter a number to be swapped: ";
	cin >> num1;
	cout << endl;

	int num2;
	cout << "Enter another number to be swapped: ";
	cin >> num2;
	cout << endl;

	cout << "Before the swap" << endl
		<< "The first number: " << num1 << endl
		<< "The second number: " << num2 << endl << endl;

	pair<int, int> swappednums = swapNumbers(num1, num2);

	cout << "After the swap" << endl
		<< "The first number: " << swappednums.first << endl
		<< "The second number: " << swappednums.second << endl;
	*/


	/*
	// This shows that you can change the value of things in the paramters
	string user_input;
	cout << "Type a string: ";
	cin >> user_input;

	cout << "You typed: " << youCanChangeTheParameter(user_input) << endl;
	return 0;
	*/


	/*
	// Function based addition
	long long int num1;
	cout << "Enter a value for number 1: ";
	cin >> num1;

	long long int num2;
	cout << "Enter a value for number 2: ";
	cin >> num2;

	cout << endl;

	cout << "Your answer is: " << addition(num1, num2);
	return 0;
	*/


	/*
	myFistFunction();
	return 0;
	*/


	/*
	// While and for loop, when using a while loop make sure to use '==' if you are saying if equal yk
	bool vishwaMonkey = true;
	while (vishwaMonkey == true) {
		for (int beans = 1; beans <= 10; beans += 1) {
			cout << "Vishwa has been a monkey for: " << beans << " years" << endl;
		}
		vishwaMonkey = false;
	}
	return 0;
	*/


	/*
	// Easy to understand for loop
	for (int monkeys = 1; monkeys < 11; monkeys += 1) {
		cout << "Monkey number: " << monkeys << endl;
	}
	return 0;
	*/


	/*
	// Random number generator: 1-6
	// For loop range 1-10
	srand(time(nullptr));
	const auto MaxValue = 6;
	const auto MinValue = 1;
	for (int i = 1; i <= 10; i = i + 1) {
		int randomNum = (rand() % (MaxValue - MinValue + 1)) + MinValue;
		cout << "Number " << i <<  ", 1-6: " << randomNum << endl;
	}
	return 0;
	*/


	/*
	// Random number generator: 1-6
	srand(time(nullptr));
	const auto MaxValue = 6;
	const auto MinValue = 1;
	int number1 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
	int number2 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
	cout << "Number1 1-6: " << number1 << endl
		<< "Number2 1-6: " << number2 << endl;
	return 0;
	*/


	/*
	// Simple random number generator 0-9
	srand(time(nullptr));
	int random = (rand() % 10);
	cout << "Random number 0-9: " << random << endl;
	return 0;
	*/


	/*
	int number = 1000000;
	short another = number;
	cout << another;
	return 0;
	*/


	/*
	int binary = 0b1; // 1 for '0001'
	unsigned int hex = 0xF; // F for 15 (can be lowercase)
	cout << "Binary number: " << binary << endl
		<< "Hexadecimal number: " << hex << endl;
	return 0;
	*/


	/*
	double price = 19.99;
	float InterestRate = 3.67F;
	long FileSize = 9000L;
	bool IsValid = false;
	return 0;
	*/


	/*
	const double pi = 3.14;
	cout << "This program will calculate the area of the circle, you need to input the radius first though." << endl;
	cout << "Enter the radius of the circle roughly: ";

	double radius;
	cin >> radius;

	double step1 = pow(radius, 2);
	double result = step1 * pi;

	cout << "The Area of the circle is: " << result << endl;
	return 0;
	*/


	/*
	int powers = pow(2, 8);
	double idktbh = floor(1.2);
	cout << "2 to the power of 8: " << powers << endl;
	cout << idktbh << endl;
	return 0;
	*/


	/*
	cout << "Enter you temp in celcius: " << endl;
	double celcius;
	cin >> celcius;
	cout << "Your temp in Fahrenheit is: " << (celcius * 9 / 5) + 32 << endl;
	return 0;
	*/


	/*
	cout << "Enter two numbers to be added:" << endl;
	double x;
	double y;
	cin >> x >> y;
	cout << "The result is: " << x + y << endl;
	*/


	/*
	// First 'if' statement
	cout << "How old are you? " << endl;
	int value;
	cin >> value;

	if (value >= 18) {
		cout << "You are an adult" << endl;
	}
	else {
		cout << "You are a child" << endl;
	}
	return 0;
	*/


	/*
	int sales = 95000;
	double StateTax = 0.04;    // 4% tax
	double CountyTax = 0.02;   // 2% tax

	cout << "Original sales: " << sales << endl
		<< "Only state tax: " << sales * StateTax << endl
		<< "only county tax: " << sales * CountyTax << endl
		<< "Sales after state tax: " << sales * (StateTax + 1 - (StateTax * 2)) << endl
		<< "Sales after county tax: " << sales * (CountyTax + 1 - (CountyTax * 2)) << endl
		<< "Sales after all the taxes: " << sales * (StateTax + 1 - (StateTax * 2)) * (CountyTax + 1 - (CountyTax * 2)) << endl;
	return 0;
	*/



	/*
	int x = 10;
	int y = 20;
	cout << y << endl // Ends the line and creates a new one
		<< "x = " << x;         // Adding onto the line above
	return 0;
	*/


	/*
	double x = 10;
	double y = 5;
	double z = (x + 10) / (3 * y);
	double answer = 20 / 15;
	cout << "The answer is: "<< z << "\n";
	return 0;
	*/


	/*
	double x = 1 + 2 * 3;
	cout << x;
	return 0;
	*/


	/*
	// Swapping values around
	int x = 10;
	int y = x++;	// x = 11, y = 10
	int z = ++x;    // x = 12, z = 12
	cout << x;
	return 0;
	*/


	/*
	const double pi = 3.14;
	pi = 0;
	cout << pi;
	return 0;
	*/


	/*
	int a = 1;
	int b = 2;

	int temp = a;
	a = b;
	b = temp;

	cout << a;
	return 0;
	*/


	/*
	int file_size = 1000000;
	int counter = 0;
	double sales = 9.99;
	cout << file_size;
	return 0;
	*/
}
