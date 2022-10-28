#include <iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int x, int y) 
	{
		this->x = x;
		this->y = y;
	}
	int GetX() {
		return x;
	}
	void SetX(int x) {
		this->x = x;
	}
	int GetY() {
		return y;
	}
	void SetY(int y) {
		this->y = y * 2 * 78;
	}
	void Print() {
		cout << "X = " << x << endl << "Y = " << y << endl<< endl;
	}

};
int main() {
	Point a(45, 421);
	a.Print();
	Point b(34, 45);
	b.Print();
	return 0;
}