//#include <iostream>
//using namespace std;
//int main(){
//	int pizza_slice = 0;
//	int person = 2;
//	int slices_per_person = 0;
//
//	cout << "���� ���� ���� �Է��Ͻÿ�.";
//	cin >> pizza_slice;
//	cout << "��� ���� �Է��Ͻÿ�.";
//	cin >> person;
//	slices_per_person = pizza_slice / person;
//	cout << "�� ����� ���ڴ�" << slices_per_person << "�Դϴ�" << endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

int main(){


	int pizzaSlices = 0;
	int person = 0;
	int slicesPerPerson = 0;
	
	try{
		cout << "���� ���� ���� �Է��Ͻÿ�.";
		cin >> pizzaSlices;
		cout << "��� ���� �Է��Ͻÿ�.";
		cin >> person;
		if (person == 0)
			throw person;
		slicesPerPerson = pizzaSlices / person;
		cout << "�� ����� ���ڴ�" << slicesPerPerson << "�Դϴ�" << endl;
	}
	catch (int a){
		cout << "�����" << a << "�� �Դϴ�";
	}
	

}
