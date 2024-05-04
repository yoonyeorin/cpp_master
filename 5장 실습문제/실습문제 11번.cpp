////#include <iostream>
////#include <cstring>
////using namespace std;
////
////class Book {
////	char* title;
////	int price;
////public:
////	Book(const char* title, int price);
////	Book(const Book& b);
////	~Book();
////	void set(const char* title, int price);
////	void show() { cout << title << ' ' << price << "원" << endl; }
////};
////Book::Book(const char* title, int price) {
////	this->price = price;
////	int len = strlen(title);
////	this->title = new char[len + 1];
////	strcpy_s(this->title, len + 1, title);
////}
////Book::Book(const Book& b) {
////	this->price = b.price;
////	int len = strlen(b.title);
////	this->title = new char[len + 1];
////	strcpy_s(this->title, len + 1, b.title);
////}
////Book::~Book() {
////	delete[] title;
////}
////void Book::set(const char* title, int price) {
////	delete[] this->title;
////	int len = strlen(title);
////	this->title = new char[len + 1];
////	strcpy_s(this->title, len + 1, title);
////	this->price = price;
////}
////int main() {
////	Book cpp("명품C++", 10000);
////	Book java = cpp;
////	java.set("명품자바", 12000);
////	cpp.show();
////	java.show();
////}
//
//
//#include <iostream>
//#include <cstring>
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
//	strcpy_s(this->title, len + 1, title);
//}
//Book::Book(const Book& b) {
//	this->price = b.price;
//	int len = strlen(b.title);
//	this->title = new char[len + 1];
//	strcpy_s(this->title, len + 1, b.title);
//}
//Book::~Book() {
//	delete[] title;
//}
//void Book::set(const char* title, int price) {
//	delete[] this->title;
//	int len = strlen(title);
//	this->title = new char[len + 1];
//	strcpy_s(this->title, len + 1, title);
//	this->price = price;
//}
//int main() {
//	Book cpp("명품 C++", 10000);
//	Book java = cpp;
//	java.set("명품자바", 12000);
//	cpp.show();
//	java.show();
//}

#include<iostream>
#include<cstring>
using namespace std;

class Book {
    string title, publisher;
    int price;
public:
    Book() {};
    int getPrice()
    {
        return price;
    }
    string getTitle()
    {
        return title;
    }

    string getPublisher()
    {
        return publisher;
    }

    void set(string title, int price, string publisher)
    {
        this->price = price;
        this->title = title;
        this->publisher = publisher;
    }

    void show() { cout << title << ' ' << price << " " << publisher << "입니다" << endl; }
};

void ShowPubList(Book b[], int size) {
    // 출판사 목록과 해당 출판사의 책 수를 저장할 배열
    string* publishers = new string[size];
    int* bookCounts = new int[size](); // 배열을 0으로 초기화
    int publisherCount = 0; // 현재까지 발견된 출판사의 수

    // 출판사 목록과 책 수 계산
    for (int i = 0; i < size; ++i) {
        bool found = false;
        // 이미 등록된 출판사인지 확인
        for (int j = 0; j < publisherCount; ++j) {
            if (publishers[j] == b[i].getPublisher()) {
                found = true;
                bookCounts[j]++; // 해당 출판사의 책 수 증가
                break;
            }
        }
        if (!found) {
            publishers[publisherCount] = b[i].getPublisher();
            bookCounts[publisherCount] = 1; // 해당 출판사의 책 수를 1로 초기화
            publisherCount++; // 새로운 출판사가 발견되었으므로 출판사 수 증가
        }
    }

    // 각 출판사별로 책 정보 출력
    for (int i = 0; i < publisherCount; ++i) {
        int cnt = 0;
        cout << publishers[i] << " " << bookCounts[i] << "권 ";
        for (int j = 0; j < size; ++j) {
            if (b[j].getPublisher() == publishers[i]) {
                cnt++;
            }
        }
        for (int j = 0; j < size; ++j) {
            if (b[j].getPublisher() == publishers[i]) {
                cout << b[j].getTitle() << " " << b[j].getPrice();
                if (cnt!=1)
                {
                    cout << ",";
                    cnt--;
                }
            }
        }
        cout << endl;
    }

    // 동적 할당된 배열 해제
    delete[] publishers;
    delete[] bookCounts;
}


int main() {
    int n, price;
    string title, publisher, name;

    cout << "책 권수? ";
    cin >> n;

    Book* b = new Book[n];

    cout << n + "권의 책의 제목과 가격, 출판사명을 입력해주세요." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "책 " << i + 1 << ">> ";
        cin >> title >> price >> publisher;
        b[i].set(title, price, publisher);
    }

    cout << "책이름을 검색합니다. 제목을 입력하세요 >> " << endl;

    cin >> name;

    for (int i = 0; i < n; i++)
    {
        if (b[i].getTitle() == name)
        {
            b[i].show();
        }
    }

    cout << "출판사별 분류는 다음과 같습니다." << endl;

    ShowPubList(b, n);
}