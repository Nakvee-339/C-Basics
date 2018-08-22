#include <iostream>

using namespace std;

#define SIZE 10

class stack{
	char stck[SIZE];
	int tos;

	public:
		void init();
		void push(char ch);
		char pop();
};

void stack :: init() {
	tos = 0;
}

void stack :: push(char ch) {
	if(tos > SIZE) {
		cout << "Stack size is full" << endl;
		return;
	}
	stck[tos] = ch;
	tos++;
}

char stack :: pop() {
	if(tos == 0) {
		cout << "Stack size is empty" << endl;
		return 0;
	}
	tos--;
	return stck[tos];
}

int main() {
	//freopen("in.txt", "r", stdin);

	stack object1, object2;

	object1.init();
	object2.init();

	object1.push('a');
	object2.push('x');
	object1.push('b');
	object2.push('y');
	object1.push('c');
	object2.push('z');

	for(int i = 0; i < 3; ++i) {
		cout << "object 1's element : " << i << " is : " << object1.pop() << endl;
	}
	for(int i = 0; i < 3; ++i) {
		cout << "object 2's element : " << i << " is : " << object2.pop() << endl;
	}

	return 0;
}