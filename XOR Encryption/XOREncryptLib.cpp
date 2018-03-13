#include "stdafx.h"

#include <iostream>
#include <conio.h>
#include <string>

#include <fstream>

#include "XORHeader.h"

using namespace std;

string XOREncryptDecrypt(string stringToEncrypt, int key)
{
	string result = stringToEncrypt;
	for (int i = 0; i < result.size(); i++)
	{
		result[i] ^= key;
	}
	return result;
}

void XORFileEncryptDecrypt(string inputFilePath, string outputFilePath) 
{
	ifstream inputFile;
	ofstream outputFile (outputFilePath, ios::binary);

	inputFile.open(inputFilePath, ios::binary);

	if (inputFile.is_open())
	{

	}


}