#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream ftxt;
	string s;
	ftxt.open("readme.txt");

	ftxt >> s;
	cout << s;

	ftxt.close();

	ofstream atxt;
	string str;

	atxt.open("tmp.txt");
	cin >> str;
	cout << str;

	atxt.close();
}