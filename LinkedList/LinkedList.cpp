#include <iostream>
using namespace std;
#define MAX 10

int stack[MAX];
int top = -1;

void push(int s) {
	
	if (top == MAX - 1) {
		cout << "Yigin Dolu eleman ekleme islemi yapilamadi.";
	}
	else {
		top++;
		stack[top] = s;
	}
}

void pop() {
	if (top == -1) {
		cout << "Yigin bos eleman silme islemi yapılamadı.";
	}
	else {
		int silinecek = stack[top];
		top--;
		cout << silinecek << " yigindan silindi.";
	}
}

int peek() {
	
	if (top == -1) {
		cout << "Yigin bos.";
		return NULL;
	}
	else {
		return stack[top];
	}
}

bool isEmpty() {
	if (top == -1) {
		return true;
	}
	else {
		return false;
	}
}

void read() {
	if (top == -1) {
		cout << "yigin bos.";
	}
	else {
		cout << stack[top] << "<- top" << endl;
		for (int i = top-1; i >=0; i--) {
			cout << stack[i] << endl;
		}
	}
}

int main() {
	
	push(3);
	push(6);
	push(7);
	push(8);
	push(1);
	push(2);

	read();

	pop();

	cout << endl << "top : " << peek();

	cout << endl << isEmpty();

}