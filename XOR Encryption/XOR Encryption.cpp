#include "stdafx.h"

#include <iostream>
#include <conio.h>
#include <string>

#include "XORHeader.h""

using namespace std;

//Create a function that receives a string to encrypt and the key, then do the XOR operation to the string with the key.
//Source : http://www.cplusplus.com/forum/articles/38516/ , With a little bit of modification.

/*
int intParser(string input) 
{
	try
	{
		int i = stol(input, NULL, 10);
		return i;
	}

	catch (invalid_argument)
	{
		return -1;
	}

	catch (out_of_range)
	{
		return -1;
	}
}
*/

int main()
{
	string testString = "TESTING123!@#";
	int key = 41;

	cout << "Input the message you want to encrypt/decrypt" << endl;
	getline(cin, testString);

	cout << "Input the key (The key should be a number from 1 to 254" << endl;

	/*
	int tempInput;

	cin >> tempInput;

	key = intParser(tempInput);

	while (key > 0 && key < 255) 
	{
		cout << "Invalid Key. Please reenter your key. Make sure your key is in range of 1-254" << endl;
		cin >> tempInput;
		key = intParser(tempInput);
	}

	*/

	//Checks if user inputted key is an integer between 1 and 254. If not, ask the user to reinput the key. Source : http://www.dynamicguru.com/tips/cpp-check-if-input-is-valid-data-type-using-cin-fail/

	while (!(cin >> key) && key > 0 && key < 255)
	{
		cin.clear();
		cout << "Invalid Key. Please reenter your key. Make sure your key is in range of 1-254" << endl;
		cin.ignore(999, '\n');
	}

	cout << XOREncryptDecrypt(testString, key) << endl;

	string encryptedMessage = XOREncryptDecrypt(testString, key);

	cout << XOREncryptDecrypt(encryptedMessage, key) << endl;

	_getch();

    return 0;
}

