
#include <iostream>
using namespace std;

int main() {

	string Passwort = "Userpassword123";
	string input = "";

	cout << "Bitte geben Sie ihr Passwort ein." << endl;
	cout << "Passwort: ";
	cin >> input;

	(input == Passwort && cout << "Willkommen!"); //sifre doogu ise
	(input != Passwort && cout << "Unbefugter Zugriff!"); //sifre yanlissa 


}
