#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void SaveFile(){
	string s;
	ofstream o("abs.txt");
	cout << "파일에 입력할 문장을 넣어주세요.";
	cin >> s;
	for (int i = 0; i < 3; i++){
		o << s<<endl;
	}
	o.close();
}

void ReadFile(){
	string s;
	ifstream i("abs.txt");
	if (i.is_open()){
		while (getline(i, s)){
			cout << s << endl;
		}
	}
	i.close();
}
int main(){
	ReadFile();
	
	return 0;
}