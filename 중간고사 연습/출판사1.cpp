#include <iostream>
#include <cstring>
using namespace std;

class Book {
	int price;
	string title, publisher;
public:
	Book() {};
	int getPrice(){
		return price;
	}
	string getTitle() {
		return title;
	}
	string getPublisher() {
		return publisher;
	}
	void set(string title, int price, string publisher) {
		this->title = title;
		this->price = price;
		this->publisher = publisher;
	}
	void ShowPubLIst(Book b[], int size) {
		string* publishers = new string[size];
		int* bookCounts = new int[size];
		int PublisherCount = 0;

		for (int i = 0; i < size; i++) {
			bool found = false;
			for (int j = 0; j < PublisherCount; j++) {
				if (b[i].getPublisher() == publishers[j])
				{
					found = true;
					bookCounts[j]++;
					break;
				}
			}
			if (!found) {
				publishers[PublisherCount] = b[i].getPublisher();
				bookCounts[PublisherCount] = 1;
				PublisherCount++;
			}
		}
		for (int i = 0; i < PublisherCount; i++) {
			int cnt = 0;
			cout << publishers[i] << bookCounts[i] << "�� ";
			for (int j = 0; j < size; j++) {
				if (b[j].getPublisher() == publishers[i])
				{
					cnt++;
				}
			}
			for (int j = 0; j < size; j++) {
				if (b[j].getPublisher() == publishers[i]) {
					cout << b[j].getTitle() << b[j].getPrice();

					if (cnt != 1) {
						cout << ',';
						cnt--;
					}
				}
			}
			cout << endl;
		}
	}
};
int main() {
	int n;
	string title, publisher;
	int price;

	cout << "å �Ǽ�?";
	cin >> n;

	Book* book = new Book[n];
	cout << n << "���� å�� ����� ����, ���ǻ���� �Է����ּ���." << endl;

	for (int i = 0; i < n; i++) {
		cout << "å " << i + 1 << ">>";
		cin >> title >> price >> publisher;
		book[i].set(title, price, publisher);
	}

	cout << endl << endl;

	cout << "���ǻ纰 �з��� ������ �����ϴ�." << endl;

	book->ShowPubLIst(book, n);
}