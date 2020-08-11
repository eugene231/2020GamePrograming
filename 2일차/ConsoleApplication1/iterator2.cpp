#include <iostream>
#include <list>
#include <vector>
using namespace std;

template<typename iter>
void print(const iter& iter_begin, const iter& iter_end){
	for (iter iter = iter_begin; iter != iter_end; iter++)
		cout << *iter << ' ';
	cout << endl;
}

template<typename iter>
void print_reverse(const iter& iter_begin, const iter& iter_end){
	iter iter = iter_end;
		while (iter != iter_begin){
			iter--;
			cout << *iter << ' ';
		}
		cout << endl;
	
}

int main(){
	vector<int> v{ 1, 2, 3, 4 };
	list<double> l{1, 1, 2, 2, 3, 3, 4, 4};
	int ary[] = { 100, 200, 300, 400 };

	print(begin(v), end(v));
	print(begin(l), end(l));
	print(begin(ary), end(ary));

	print_reverse(begin(v), end(v));
	print_reverse(begin(l), end(l));
	print_reverse(begin(ary), end(ary));
}