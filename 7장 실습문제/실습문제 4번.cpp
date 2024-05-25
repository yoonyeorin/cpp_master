#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Book;
bool operator < (string str, Book b);

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }
	friend bool operator < (string str, Book b);
};
bool operator < (string str, Book b) {
	if (str.compare(b.title) < 0) return true;
	else return false;
}

int main() {
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
	return 0;
}