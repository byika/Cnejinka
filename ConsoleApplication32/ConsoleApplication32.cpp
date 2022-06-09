


#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

#pragma comment(lib, "winmm.lib")

DWORD WINAPI MusicWin(void* param)
{
    PlaySoundA("sound\\mon.WAV", NULL, SND_NODEFAULT | SND_LOOP);
    return 0;
}


DWORD WINAPI MusicFail(void* param)
{
	PlaySoundA("sound\\fail.WAV", NULL, SND_NODEFAULT | SND_LOOP);
	return 0;
}


void Win()
{
		system("title PlaySound Demo");
		CreateThread(0, 0, MusicWin, 0, 0, 0);
		cout << "TlPABULbHO! \t (+500)\n";
		Sleep(5000);
}


void Fail()
{
		system("title PlaySound Demo");
		CreateThread(0, 0, MusicFail, 0, 0, 0);
		Sleep(5000);
}


int main()
{
	std::string start, ans;
	int answ = 0;
	int coins = 0;



	switch (answ)
	{
	case 0:
		cout << "DObPO TlOJkCALOBATb B UGPY: \n\t\t Bbl GOTOBbl HAchATb? \t(Y/N): \n";
		std::getline(std::cin, start);

		while (start != "Y"){
			cout << "DObPO TlOJkCALOBATb B UGPY: \n\t\t Bbl GOTOBbl HAchATb? \t(Y/N): \n";
			std::getline(std::cin, start);
		}
		answ++;

	case 1:
		cout << "\n1. (2 + 2 * 2) / 2 = ? \n A)2\tB)4\tC)8\tD)3\n";
		std::getline(std::cin, ans);
		if (ans == "D") {
			Win();
			coins += 500;
		}
		else {
			Fail();
			cout << "HE TlPABULbHO! \n";
		}
		answ++;
		

	case 2:
		cout << "\n2. chTO DAET KOPOBA? \n A)YAUZA\tB)MOLOKO\tC)XLEb\tD)TlO LUZY\n";
		std::getline(std::cin, ans);
		if (ans == "B") {
			Win();
			coins += 500;
		}
		else {
			Fail();
			cout << "HE TlPABULbHO! \n";
		}
		answ++;
		

	case 3:
		cout << "\n3. !Bbl DOshLU DO HECGOPAEMOU CYMMbl (1000)!\n\n";
		cout << "\n3UMOU U LETOM ODNIM ZBETOM: \n A)GRYshA\tB)DEHbGU\tC)ELKA\tD)DOM\n";
		std::getline(std::cin, ans);
		if (ans == "C") {
			Win();
			coins += 500;
		}
		else {
			Fail();
			cout << "HE TlPABULbHO! \n";
			if (coins > 1000) {
				coins -= 500;
			}
		}
		answ++;
		

	case 4:
		cout << "\n4. sin(30) ???: \n A)1/2\tB)2/2\tC)1\tD)1.0\n";
		std::getline(std::cin, ans);
		if (ans == "A") {
			Win();
			coins += 500;
		}
		else {
			Fail();
			cout << "HE TlPABULbHO! \n";
			if (coins > 1000) {
				coins -= 500;
			}
		}
		answ++;
		

	case 5:
		cout << "\n5. TlOD KAKOU bYKBOU bblL TlPABULbHblU OTBET HA TlePBblU BOTlPOC? \n A)B\tB)E\tC)D\tD)B\n";
		std::getline(std::cin, ans);
		if (ans == "D") {
			Win();
			coins += 500;
		}
		else {
			Fail();
			cout << "HE TlPABULbHO! \n";
			if (coins > 1000) {
				coins -= 500;
			}
		}
		answ++;
		

	case 6:
		cout << "\nUGPA 3ABEPshULACb, Bbl BblUGPALU:" << coins << "DENYAK";
		break;

	default:
		cout << "\n???";
		answ = 0;
	}
}