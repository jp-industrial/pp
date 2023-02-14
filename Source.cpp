#include "C:\users\james\Desktop\std_lib_facilities.h"

int main()

{
	int two_pound = 0;
	int one_pound = 0;
	int fifty = 0;
	int twenty = 0;
	int ten = 0; 
	int five = 0;
	int two = 0;
	int one = 0;

	cout << "How many two-pound coins do you have?\n";
	cin >> two_pound;
	
	cout << "How many one-pound coins do you have? \n";
	cin >> one_pound;
	
	cout << "How many 50p coins do you have? \n";
	cin >> fifty;

	cout << "How many 20p coins do you have? \n";
	cin >> twenty;

	cout << "How many 10p coins do you have? \n";
	cin >> ten;

	cout << "How many 5p coins do you have? \n";
	cin >> five;

	cout << "How many 2p coins do you have? \n";
	cin >> two;

	cout << "How many 1p coins do you have? \n";
	cin >> one;

	cout << "You have:\n";
	
	if (two_pound == 1)
		cout << two_pound << " two-pound coin,\n";
	if (two_pound != 1)
		cout << two_pound << " two-pound coins,\n"; //accounts for singles and multiples.

	if (one_pound == 1)
		cout << one_pound << " one-pound coin,\n";
	if (one_pound != 1)
		cout << one_pound << " one-pound coins,\n";
	
	if (fifty == 1)
		cout << fifty << " fifty-pence coin,\n";
	if (fifty != 1)
		cout << fifty << " fifty-pence coins,\n";

	if (twenty == 1)
		cout << twenty << " twenty-pence coin,\n";
	if (twenty != 1)
		cout << twenty << " twenty-pence coins,\n";

	if (ten == 1)
		cout << ten << " ten-pence coin,\n";
	if (ten != 1)
		cout << ten << " ten-pence coins,\n";

	if (five == 1)
		cout << five << " five-pence coin,\n";
	if (five != 1)
		cout << five << " five-pence coins,\n";

	if (two == 1)
		cout << two << " two-pence coin,\n";
	if (two != 1)
		cout << two << " two-pence coins,\n";

	if (one == 1)
		cout << one << " penny coin.\n";
	if (one != 1)
		cout << one << " penny coins.\n";
}