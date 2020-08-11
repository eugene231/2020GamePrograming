//#include <iostream>
//using namespace std;
//int main(){
//	int pizza_slice = 0;
//	int person = 2;
//	int slices_per_person = 0;
//
//	cout << "피자 조각 수를 입력하시오.";
//	cin >> pizza_slice;
//	cout << "사람 수를 입력하시오.";
//	cin >> person;
//	slices_per_person = pizza_slice / person;
//	cout << "한 사람당 피자는" << slices_per_person << "입니다" << endl;
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
		cout << "피자 조각 수를 입력하시오.";
		cin >> pizzaSlices;
		cout << "사람 수를 입력하시오.";
		cin >> person;
		if (person == 0)
			throw person;
		slicesPerPerson = pizzaSlices / person;
		cout << "한 사람당 피자는" << slicesPerPerson << "입니다" << endl;
	}
	catch (int a){
		cout << "사람이" << a << "명 입니다";
	}
	

}
