#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<math.h>


// simple c++ calculator 
// can convert a value into hex


void MathFunc() {
	float num1;
	float num2;
	float result;
	float newResult;
	char op;
	char toContinue = 'y/n';

	// to calculate a total
	printf("Enter First Number: ");
	std::cin >> num1;
	printf("\n");

	// enter op:
	printf("Enter Operator: ");
	std::cin >> op;
	printf("\n");

	// enter number 2
	printf("Enter Second Number: ");
	std::cin >> num2;
	printf("\n");

	if(op == '+'){
		result = num1 + num2;
	} else if (op == '-') {
		result = num1 - num2;
	} else if (op == '*') {
		result = num1 * num2;
	} else if (op == '/') {
		result = num1 / num2;
	} else if (op == '>') {
		result = num1 > num2;
	} else if (op == '<') {
		result = num1 < num2;
	}

	std::cout << "Total is: " << result << std::endl;
	printf("\n");
	printf("Do You Want To Continue: ");
	std::cin >> toContinue;


	if(toContinue == 'y') {
		printf("Enter First Number: ");
		std::cin >> num1;
		printf("\n");

		printf("Enter Op: ");
		std::cin >> op;
		printf("\n");

		printf("Enter Second Number: ");
		std::cin >> num2;
		printf("\n");

		if(op == '+') {
			newResult = num1 + num2;
		} else if(op == '-') {
			newResult = num1 - num2;
		} else if(op == '*') {
			newResult = num1 * num2;
		} else if(op == '/') {
			newResult = num1 / num2;
		} else if(op == '>') {
			newResult = num1  > num2;
		} else if(op == '<') {
			newResult = num1 < num2;
		}

		std::cout << "Total is: " << newResult << std::endl;
		printf("\n");

		bool DoesUserWantToExit;
		printf("Do You Still want to Continue If So Enter 1: ");
		std::cin >> DoesUserWantToExit;
		if (DoesUserWantToExit == 1) {
			char ToHex = 'y/n';
			printf("Do You Want to convert into hex: Y/n ");
			std::cin >> ToHex;

			if (ToHex == 'y') {
				printf("Enter A Value to Convert into hex: ");
				int numberToHex;
				std::cin >> numberToHex;
				int resultHex;

				std::cout << "Hex value is : 0x" << std::hex << numberToHex << std::endl;
			} else if(ToHex == 'n') {
				printf("[+] Exiting Now Run ./Cal To Run Again: ");
				exit(EXIT_FAILURE);
			}


		} else {

			fprintf(stderr, "[+] Exiting now\n");
			exit(EXIT_FAILURE);
		}

	}
	if (toContinue == 'n') {
		fprintf(stderr, "Exiting now\n");
		exit(EXIT_FAILURE);
	}
}


int main()
{
	MathFunc();
	return 0;
}