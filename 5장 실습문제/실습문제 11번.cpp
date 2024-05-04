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
////	void show() { cout << title << ' ' << price << "��" << endl; }
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
////	Book cpp("��ǰC++", 10000);
////	Book java = cpp;
////	java.set("��ǰ�ڹ�", 12000);
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
//	void show() { cout << title << ' ' << price << "��" << endl; }
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
//	Book cpp("��ǰ C++", 10000);
//	Book java = cpp;
//	java.set("��ǰ�ڹ�", 12000);
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

    void show() { cout << title << ' ' << price << " " << publisher << "�Դϴ�" << endl; }
};

void ShowPubList(Book b[], int size) {
    // ���ǻ� ��ϰ� �ش� ���ǻ��� å ���� ������ �迭
    string* publishers = new string[size];
    int* bookCounts = new int[size](); // �迭�� 0���� �ʱ�ȭ
    int publisherCount = 0; // ������� �߰ߵ� ���ǻ��� ��

    // ���ǻ� ��ϰ� å �� ���
    for (int i = 0; i < size; ++i) {
        bool found = false;
        // �̹� ��ϵ� ���ǻ����� Ȯ��
        for (int j = 0; j < publisherCount; ++j) {
            if (publishers[j] == b[i].getPublisher()) {
                found = true;
                bookCounts[j]++; // �ش� ���ǻ��� å �� ����
                break;
            }
        }
        if (!found) {
            publishers[publisherCount] = b[i].getPublisher();
            bookCounts[publisherCount] = 1; // �ش� ���ǻ��� å ���� 1�� �ʱ�ȭ
            publisherCount++; // ���ο� ���ǻ簡 �߰ߵǾ����Ƿ� ���ǻ� �� ����
        }
    }

    // �� ���ǻ纰�� å ���� ���
    for (int i = 0; i < publisherCount; ++i) {
        int cnt = 0;
        cout << publishers[i] << " " << bookCounts[i] << "�� ";
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

    // ���� �Ҵ�� �迭 ����
    delete[] publishers;
    delete[] bookCounts;
}


int main() {
    int n, price;
    string title, publisher, name;

    cout << "å �Ǽ�? ";
    cin >> n;

    Book* b = new Book[n];

    cout << n + "���� å�� ����� ����, ���ǻ���� �Է����ּ���." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "å " << i + 1 << ">> ";
        cin >> title >> price >> publisher;
        b[i].set(title, price, publisher);
    }

    cout << "å�̸��� �˻��մϴ�. ������ �Է��ϼ��� >> " << endl;

    cin >> name;

    for (int i = 0; i < n; i++)
    {
        if (b[i].getTitle() == name)
        {
            b[i].show();
        }
    }

    cout << "���ǻ纰 �з��� ������ �����ϴ�." << endl;

    ShowPubList(b, n);
}