#include <iostream>


using namespace std;
const int Size = 10;

void init(int *p);
void print(int *p);
void exchange(int *p, int *one,int *two);

void main() {
	int arr[10];
	int *p = &arr[0];
	int *one = &arr[0];
	int *two = one + 1;
	init(p);
	print(p);
	exchange(p,one, two);
	print(p);

	system("pause>nul");
}

void init(int *p) {
	for (int i = 0; i < Size; i++,p++){
		cin >> *p;
	}
}
void print(int *p) {
	for (int j = 0; j < Size; j++,p++) {
		cout << *p<<" ";
	}
}
void exchange(int *p,int *one, int *two) {

	for (int i = 0; i < Size; i++, p++,one++, two++) {
		if (i % 2 == 0) {
			*one = *p;
			cout << "===============================" << endl;
			cout << " Before the change: " << endl;
			cout << *one<<endl;
			int t = *one;
			*one = *two;
			*two = t;
			cout << "===============================" << endl;
			cout << "===============================" << endl;
			cout << " After the change: " << endl;
			cout << *one<<endl;
			cout << "===============================" << endl;
		}

		
		}

	}

