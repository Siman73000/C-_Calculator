#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
using std::cout;
using std::cin;
using namespace std::this_thread;
using namespace std::chrono;

class WelcomePage {
public:
	int welcomemethod() {
		int usr_input, usr_input2, value1, value2, ans;
		float value3, value4, ans2;
		system("cls");
		cout << " " << '\n';
		cout << "Welcome to the C++ Calculator!" << '\n';
		cout << "******************************" << '\n' << '\n';
		cout << "1: Addition" << '\n';
		cout << "2: Subtraction" << '\n';
		cout << "3: Multiplication" << '\n';
		cout << "4: Division" << '\n';
		cout << "0: Quit" << '\n';
		cin >> usr_input;
		if (usr_input != 0 && usr_input != 1 && usr_input != 2 && usr_input != 3 && usr_input != 4) {		// return -1 if usr_input is anything but 01234
			return -1;
		}
		return usr_input;
	}
};

WelcomePage welcomeobj;	// create object from class

int main(void) {
	int usr_input, usr_input2, value1, value2, ans;
	float value3, value4, ans2;
	while (true) {
		usr_input = welcomeobj.welcomemethod();
		switch (usr_input) {		// call the welcome method from the object
		case -1:
			cout << "Invalid Input Enter Selection Again" << '\n';
			sleep_for(seconds(3));	// artificial delay for error correction to work
			break;
		case 1:
			system("cls");
			cout << "Addition" << '\n';
			cout << " " << '\n';
			cout << "Enter your first number: ";
			cin >> value1;
			cout << " " << '\n';
			cout << "Enter your second number: ";
			cin >> value2;
			cout << " " << '\n';
			ans = value1 + value2;
			cout << "Your answer is " << ans << '\n';
			cout << "1: Main Menu" << '\n';
			cout << "0: Quit" << '\n';
			cin >> usr_input2;
			if (usr_input2 == 1) {
				system("cls");
				break;
			}
			else if (usr_input2 == 0) {
				return 0;
			}
			else {
				cout << "Invalid Input Enter Selection Again" << '\n';
				cin >> usr_input2;
			}
		case 2:
			system("cls");
			cout << "Subtraction" << '\n';
			cout << " " << '\n';
			cout << "Enter your first number: ";
			cin >> value1;
			cout << " " << '\n';
			cout << "Enter your second number: ";
			cin >> value2;
			cout << " " << '\n';
			ans = value1 - value2;
			cout << "Your answer is " << ans << '\n';
			cout << "1: Main Menu" << '\n';
			cout << "0: Quit" << '\n';
			cin >> usr_input2;
			if (usr_input2 == 1) {
				system("cls");
				break;
			}
			else if (usr_input2 == 0) {
				return 0;
			}
			else {
				cout << "Invalid Input Enter Selection Again" << '\n';
				cin >> usr_input2;
			}
		case 3:
			system("cls");
			cout << "Multiplication" << '\n';
			cout << " " << '\n';
			cout << "Enter your first number: ";
			cin >> value1;
			cout << " " << '\n';
			cout << "Enter your second number: ";
			cin >> value2;
			cout << " " << '\n';
			ans = value1 * value2;
			cout << "Your answer is " << ans << '\n';
			cout << "1: Main Menu" << '\n';
			cout << "0: Quit" << '\n';
			cin >> usr_input2;
			if (usr_input2 == 1) {
				system("cls");
				break;
			}
			else if (usr_input2 == 0) {
				return 0;
			}
			else {
				cout << "Invalid Input Enter Selection Again" << '\n';
				cin >> usr_input2;
			}
		case 4:
			system("cls");
			cout << "Division" << '\n';
			cout << " " << '\n';
			cout << "Enter your first number: ";
			cin >> value3;
			cout << " " << '\n';
			cout << "Enter your second number: ";
			cin >> value4;
			cout << " " << '\n';
			ans2 = value3 / value4;
			cout << "Your answer is " << ans2 << '\n';
			cout << "1: Main Menu" << '\n';
			cout << "0: Quit" << '\n';
			cin >> usr_input2;
			if (usr_input2 == 1) {
				system("cls");
				break;
			}
			else if (usr_input2 == 0) {
				return 0;
			}
			else {
				cout << "Invalid Input Enter Selection Again" << '\n';
				cin >> usr_input2;
			}
		case 0:
			return 0;
		}
	}
	return 0;
}