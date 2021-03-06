#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

bool getStu(ifstream &stuFile, int& stuID, int& exam1, int& exam2, int& finalExam){
	stuFile >> stuID >> exam1 >> exam2 >> finalExam;
	if (!stuFile){
		return false;
	}
	else{
		return true;
	}
}

void calcGrade(int exam1, int exam2, int fianlExam,int& avrg,char& grade){
	avrg = (exam1 + exam2 + fianlExam)/3;
	if (avrg >= 90){
		grade = 'A';
	}
	else if (avrg >= 80){
		grade = 'B';
	}
	else if (avrg >= 70){
		grade = 'C';
	}
	else if (avrg >= 60){
		grade = 'D';
	}
	else
		grade = 'F';
	
}

void writeStu(ofstream& gradeFile, int stuID, int avrg, char grade){
	gradeFile.fill('0');
	gradeFile << setw(4) << stuID;
	gradeFile.fill(' ');
	gradeFile << setw(3) << avrg;
	gradeFile << ' ' << grade << endl;
}

int main(){
	ifstream stuFile;
	cout << "프로그램 시작" << endl;
	stuFile.open("ch7STUFL.DAT");
	if (!stuFile){
		cerr << "파일 오픈 에러" << endl;
		exit(100);
	}

	ofstream gradesFile;
	gradesFile.open("ch7STUGR.DAT");
	if (!gradesFile){
		cerr << "파일 오픈 에러" << endl;
		exit(102);
	}

	int stuid, exam1, exam2, finalExam, avrg;
	char grade;

	while (getStu(stuFile, stuid, exam1, exam2, finalExam)){
		calcGrade(exam1, exam2, finalExam, avrg, grade);
		writeStu(gradesFile, stuid, avrg, grade);

	}

	stuFile.close();
	gradesFile.close();
	cout << "프로그램 종료" << endl;

	return 0;

}