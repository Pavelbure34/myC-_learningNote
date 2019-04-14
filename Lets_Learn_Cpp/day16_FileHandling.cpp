#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/* you can work with the file in C++.
		In order to do that, you need fstream library.
	*/

void FileBasic(string fileDir) {
	ofstream File;
	File.open(fileDir);  //with open function, you can provide full directory.
	File.close();
}

void FileExample() {
	ofstream File("C:\\Users\\dongb\\Desktop\\CS\\C++\\Share\\MyText"); //you can provide path to the file.
	if (File.is_open())
		cout << "Ready to read" << endl;
	else
		cout << "Not ready yet" << endl;
	File.close(); //when the file is used, close it.
}

void readFile(string fileDir) {
	/* You can read file with fstream of ifstream object.
	*/
	ifstream File(fileDir);
	//fstream File("MyText.txt");
	string line;
	while (getline(File, line)) {
		cout << line << '\n'; //read it line by line
	}
	File.close();
}


void readFile() {
	/* You can read file with fstream of ifstream object.
	*/
	ifstream File("MyText.txt");
	//fstream File("MyText.txt");
	string line;
	while (getline(File, line)) {
		cout << line << '\n'; //read it line by line
	}
	File.close();
}
/* Another functions related to file

	I.  ios :: app : append to end of file
	II. ios :: ate : go to the end of the file on opening
	III. ios :: binary : file open in binary mode
	IV.  ios :: in : open file in reading only
	V. ios :: out : open file for writing only
	VI ios :: trunc : delete contents of the file if it exists.
*/


int main() {
	//readFile("C:\Users\dongb\Desktop\CS\C++\Share\MyText");
	FileBasic("C:\\Users\\dongb\\Desktop\\CS\\C++\\Share\\MyText");
}