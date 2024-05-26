#include "include.h"
#include <iostream>
int main()
{
	trigger::procID = memory::GetProcID(L"cs2.exe");
	trigger::module_base = memory::GetModuleBaseAddress(trigger::procID, L"client.dll");
	system("color 6");
	std::cout << "Injetando...\n";
	Sleep(1000);
	std::cout << "Injetando Bypass\n";
	Sleep(1000);
	std::cout << "Injetado com sucesso! By Igr0t\n";
	Sleep(3000);
	system("cls");
	system("color 4");
	std::cout << "________          __                                          _______              __      _______             ______          " << std::endl;
	std::cout << "|        \\        |  \\                                        |       \\            |  \\    |       \\           |      \\         " << std::endl;
	std::cout << " \\$$$$$$$$______   \\$$  ______    ______    ______    ______  | $$$$$$$\\  ______  _| $$$_   | $$$$$$$\\ __    __  \\$$$$$$ ______  " << std::endl;
	std::cout << "   | $$  /      \\ |  \\ /      \\  /      \\  /      \\  /      \\ | $$__/ $$ /      \\|   $$ \\  | $$__/ $$|  \\  |  \\  | $$  /      \\ " << std::endl;
	std::cout << "   | $$ |  $$$$$$\\| $$|  $$$$$$\\|  $$$$$$\\|  $$$$$$\\|  $$$$$$\\| $$    $$|  $$$$$$\\\\$$$$$$  | $$    $$| $$  | $$  | $$ |  $$$$$$\\" << std::endl;
	std::cout << "   | $$ | $$   \\$$| $$| $$  | $$| $$  | $$| $$    $$| $$   \\$$| $$$$$$$\\| $$  | $$ | $$ __ | $$$$$$$\\| $$  | $$  | $$ | $$  | $$" << std::endl;
	std::cout << "   | $$ | $$      | $$| $$__| $$| $$__| $$| $$$$$$$$| $$      | $$__/ $$| $$__/ $$ | $$|  \\| $$__/ $$| $$__/ $$ _| $$_| $$__| $$" << std::endl;
	std::cout << "   | $$ | $$      | $$ \\$$    $$ \\$$    $$ \\$$     \\| $$      | $$    $$ \\$$    $$  \\$$  $$| $$    $$ \\$$    $$|   $$ \\\\$$    $$" << std::endl;
	std::cout << "    \\$$  \\$$       \\$$ _\\$$$$$$$ _\\$$$$$$$  \\$$$$$$$ \\$$       \\$$$$$$$   \\$$$$$$    \\$$$$  \\$$$$$$$  _\\$$$$$$$ \\$$$$$$_\\$$$$$$$" << std::endl;
	std::cout << "                      |  \\__| $$|  \\__| $$                                                           |  \\__| $$       |  \\__| $$" << std::endl;
	std::cout << "                       \\$$    $$ \\$$    $$                                                            \\$$    $$        \\$$    $$" << std::endl;
	std::cout << "                        \\$$$$$$   \\$$$$$$                                                              \\$$$$$$          \\$$$$$$ " << std::endl;

	std::cout << "EntityList = 0x18C2D58\n";
	std::cout << "ForceJump = 0x1730530\n";
	std::cout << "PlantedC4 = 0x1928AD8\n";
	std::cout << "LocalPlayer = 0x17371A8\n";
	std::cout << "By Igr0t";






	while (!GetAsyncKeyState(VK_F5)) {
		trigger::execute() ;
	}

	return 0;
}