#include <iostream>
#include "CpuChip.h"
#include "Motherboard.h"
#include "PcUnit.h"
#include "PcUnitInterface.h"
#include "Processor.h"
#include "User.h"

void displayPcInfo(PcUnit);
void displayPersonalInfo(User);
void displayPrices(PcUnit);
void displayMenu();

int main() {
	User user1;
	PcUnit pc1;
	std::string c;
	int i, choice;
	float f;
	bool vari = true;

	std::cout << "Please enter your username.\n";
	std::cin >> c;
	user1.setUsername(c);

	std::cout << "Please enter your password.\n";
	std::cin >> c;
	user1.setPassword(c);

	std::cout << "Please enter the name of your PC unit.\n";
	std::cin >> c;
	pc1.setPcUnitName(c);

	std::cout << "Please enter the lentgh of your warranty in months.\n";
	std::cin >> i;
	pc1.setWarranty(i);

	std::cout << "Please enter the price of your PC in euros.\n";
	std::cin >> f;
	pc1.setPrice(f);

	while (vari) {
		displayMenu();

		std::cout << "Enter your choice: ";
		std::cin >> choice;

		switch (choice) {
		case 1:
			displayPcInfo(pc1);
			break;
		case 2:
			displayPersonalInfo(user1);
			break;
		case 3:
			displayPrices(pc1);
			break;
		case 4:
			vari = false;
			std::cout << "Goodbye!";
			break;
		default:
			std::cout << "You must choose a valid option.\n";
		}
	}

	return 0;
}

void displayPcInfo(PcUnit pc) {
	std::cout << "\n\nPC Info:\n";
	std::cout << "PC Unit Name:\t" << pc.getPcUnitName() << "\n";
	std::cout << "PC Unit Price:\t" << pc.getPrice() << "euros\n";
	std::cout << "Warranty:\t" << pc.getWarranty() << " months\n\n\n";

	std::cout << "Wanna repeat this?\n";
}

void displayPersonalInfo(User user) {
	std::cout << "Username:\t" << user.getUsername() << "\n";
	std::cout << "Age:\t" << user.getAge() << "\n\n\n";

	std::cout << "Wanna repeat this?\n";
}

void displayPrices(PcUnit pc) {
	std::cout << "PC Unit price:\t" << pc.getPrice() << "\n\n\n";

	std::cout << "Wanna repeat this?\n";
}

void displayMenu() {
	std::cout << "\n\n";
	std::cout << "---------------------------------------------\n";
	std::cout << "|     What do you want to do now?           |\n";
	std::cout << "|   1 Get the PC Info			              |\n";
	std::cout << "|   2 Display personal info		          |\n";
	std::cout << "|   3 Get the price of your hardware        |\n";
	std::cout << "|   4 I do not want anything, thank you     |\n";
	std::cout << "---------------------------------------------\n\n";
}