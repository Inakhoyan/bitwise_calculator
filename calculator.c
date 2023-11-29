#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to decimal
int	decimal (int selection, int dec1, int dec2) {
	(void)dec1;
	(void)dec2;
	if (selection < 1 || selection > 8) {
		printf ("Invalid number system. Please try again.\n");
		return 0;
	}

	int num1;
	printf ("Enter to number: ");
	scanf ("%d", &num1);

	int num2;
	printf ("Enter to number: ");
	scanf ("%d", &num2);

		//Bitwise AND
		if(selection == 1){
			return num1 & num2;
		}
		//Bitwise OR
		else if (selection == 2){
			return num1 | num2;
		}
		//Bitwise XOR
		else if (selection == 3){
			return num1 ^ num2;
		}
		//Bitwise NOR
		else if (selection == 4){
			return ~(num1 | num2);
		}
		//Bitwise left shift
		else if (selection == 5){
			return num1 << num2;
		}
		//Bitwise right shift
		else if(selection == 6){
			return num1 >> num2;
		}

return 0;
}

// Function to binary
int	binary (int selection) {
	if(selection < 1 || selection > 8){
		printf("Invalid number system. Please try again.\n");
		return 0;
	}
	// Convert the binary string to an integer
	char input1[32];
	printf ("Enter to number: ");
	scanf ("%s", input1);

	// Validate the first input as hexadecimal
    if (input1[0] != '0' || (input1[1] != 'b' && input1[1] != 'B')) {
        printf("Invalid number system. Please try again.\n");
        return 0;
    }

	int num1 = strtol(input1 + 2, NULL, 2);

	// Convert the binary string to an integer
	char input2[32];
	printf ("Enter to number: ");
	scanf ("%s", input2);

	// Validate the first input as hexadecimal
	if (input2[0] != '0' || (input2[1] != 'b' && input2[1] != 'B')) {
        printf("Invalid number system. Please try again.\n");
        return 0;
    }

	int num2 = strtol (input2 + 2, NULL, 2);

		//Bitwise AND
		if(selection == 1){
			return num1 & num2;
		}
		//Bitwise OR
		else if (selection == 2){
			return num1 | num2;
		}
		//Bitwise XOR
		else if (selection == 3){
			return num1 ^ num2;
		}
		//Bitwise NOR
		else if (selection == 4){
			return ~(num1 | num2);
		}
		//Bitwise left shift
		else if (selection == 5){
			return num1 << num2;
		}
		//Bitwise right shift
		else if(selection == 6){
			return num1 >> num2;
		}
return 0;
}

// Function to hexadecimal
int	hexadecimal (int selection) {
	if (selection < 1 || selection > 8) {
		printf("Invalid number system. Please try again.\n");
		return 0;
	}
	// Convert the binary string to an integer
	char input1[32];
	printf ("Enter to number: ");
	scanf ("%s", input1);

	// Validate the first input as hexadecimal
	if (input1[0] != '0' || (input1[1] != 'x' && input1[1] != 'X')) {
        printf("Invalid number system. Please try again.\n");
        return 0;
    }

	long num1 = strtol(input1, NULL, 16);

	// Convert the binary string to an integer
	char input2[32];
	printf ("Enter to number: ");
	scanf ("%s", input2);

	// Validate the first input as hexadecimal
	if (input2[0] != '0' || (input2[1] != 'x' && input2[1] != 'X')) {
        printf("Invalid number system. Please try again.\n");
        return 0;
    }

	long num2 = strtol (input2, NULL, 16);

		//Bitwise AND
		if(selection == 1){
			return num1 & num2;
		}
		//Bitwise OR
		else if (selection == 2){
			return num1 | num2;
		}
		//Bitwise XOR
		else if (selection == 3){
			return num1 ^ num2;
		}
		//Bitwise NOR
		else if (selection == 4){
			return ~(num1 | num2);
		}
		//Bitwise left shift
		else if (selection == 5){
			return num1 << num2;
		}
		//Bitwise right shift
		else if(selection == 6){
			return num1 >> num2;
		}
		
return 0;
}

int main() {
	while(1){
		int input1;
		printf ("Bitwise Calculator.\n");
		printf ("Enter number system for input(2 for binry, 10 for decimal, 16 for hexadecimal): ");
		//Input 1
		scanf ("%d", &input1);
		
		if (input1 != 10 && input1 != 16 && input1 != 2) {
			printf("Invalid number system. Please try again.\n");
			continue;
		}
		int input2;
		printf("Enter number system for input(2 for binry, 10 for decimal, 16 for hexadecimal): ");
		//Input 2
		scanf("%d", &input2);

		if (input2 != 10 && input2 != 16 && input2 != 2) {
			printf("Invalid number system. Please try again.\n");
			continue;
		} 
		
	int selection = 0;
	while (selection != 8) {
		printf("\n1. AND \n");
		printf("2. OR \n");
		printf("3. XOR \n");
		printf("4. NOR \n");
		printf("5. Left Shift \n");
		printf("6. Right Shift \n");
		printf("7. Replay \n");
		printf("8. Exit \n");
		printf("Choose an operation: ");
		scanf("%d", &selection);

		if (selection == 8) {
			printf("Program terminated.\n");
			exit(0);
		}
		if (selection == 7) {
			break; // Break inner loop to replay
		}
			//Call decimall
			if ((input1 == 10 && input2 == 10)) {
				int result = decimal(selection, input1, input2);
				printf("Result: ");
				printf("%d\n", result);
			}
			//Call binary
			else if ((input1 == 2 && input2 == 2)) {
				int result = binary(selection);
				printf("Result: 0b");
				for (int i = sizeof(int) * 8 - 1; i >= 0; --i) {
					printf("%d", (result >> i) & 1);
				}
				printf("\n");
			}
			//Call hexadecimal
			else if ((input1 == 16 && input2 == 16)) {
				int result = hexadecimal(selection);
				printf("Result: 0x%X\n", result);
			}
		}
	}
}