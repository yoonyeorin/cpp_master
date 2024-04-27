//#include <iostream>
//#include <cstring>
//#define _CRT_SECURE_NO_WARNINGS
//using namespace std;
//
//class Book {
//	char* title;
//	int price;
//public:
//	Book(const char* title, int price);
//	Book(const Book& b);
//	~Book();
//	void set(const char* title, int price);
//	void show() { cout << title << ' ' << price << "원" << endl; }
//};
//Book::Book(const char* title, int price) {
//	this->price = price;
//	int len = strlen(title);
//	this->title = new char[len + 1];
//	strcpy(this->title, title);
//
//}
//Book::Book(const Book& b) {
//	int len = strlen(b.title) + 1;
//	this->title = new char[len + 1];
//	strcpy(this->title, b.title);
//	this->price = b.price;
//}
//Book::~Book() {
//	if (this->title) {
//		delete[] title;
//	}
//}
//void Book::set(const char* title, int price) {
//	if (this->title) {
//		delete[] title;
//	}
//	int len = strlen(title);
//	this->title = new char[len + 1];
//	strcpy(this->title, title);
//	this->price = price;
//
//}
//int main() {
//	Book cpp("명품C++", 10000);
//	Book java = cpp;
//	java.set("명품자바", 12000);
//	cpp.show();
//	java.show();
//}

#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	Book(const Book& b);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char* title, int price) {
	this->price = price;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy_s(this->title, len + 1, title);
}

Book::Book(const Book& b) {
	int len = strlen(b.title);
	this->title = new char[len + 1];
	strcpy_s(this->title, len + 1, b.title);
	this->price = b.price;
}

Book::~Book() {
	delete[] title;
}

void Book::set(const char* title, int price) {
	delete[] this->title;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy_s(this->title, len + 1, title);
	this->price = price;
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}