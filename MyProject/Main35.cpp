#include <iostream> 
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point() {
		x = 0;
		y = 0;
		cout << this << " constructor" << endl;
		
	}
	void SetX(int x) {
		this->x = x;

	}
	Point(int valueX, int valueY) {
		x = valueX;
		y = valueY;
		cout << this << " constructor2" << endl;

    }
	Point(int valueX, bool boolean) {
		x = valueX;
		if (boolean) {
			y = 1;
		}
		else 
		{
			y = -1;

		}
	}
public:
	void Print() {
		cout << "x = " << x << endl << "y = " << y << endl;
	}
};
class MyClass {
public:
	int* data;

	MyClass(int size) {
		this->size = size;
		this->data = new int[size];

		for (int i = 0; i < size; i++) {
			data[i] = i;
		}
		cout << "The destructor constructor" << this << endl;
	};

	MyClass(const MyClass& other) {

		this->size = other.size;
		this->data = new int[other.size];
		for (int i = 0; i < other.size; i++) {
			this->data[i] = other.data[i];
		}
		cout << "The copy constructor is invoked" << this << endl;
	}


	MyClass & operator = (const MyClass& other) {
		cout << "The assignment operator was invoked" << this << endl;
		this->size = other.size;
		if (this->data != nullptr) {
		delete[] this->data;

		}
		this->data = new int[other.size];
		for (int i = 0; i < other.size; i++) {
			this->data[i] = other.data[i];
		}
		return *this;
	}



	~MyClass() {
		cout << "The destructor volunteered" << this << endl;
		delete[] data;
	};
private:
	int size;
};

int main() {
	MyClass a(10);
	MyClass b(2);
	MyClass c(5);
	c = a = b;
	return 0;
	
}