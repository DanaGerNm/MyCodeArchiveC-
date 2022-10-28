//#include <iostream>
//using namespace std;
//class Apple {
//public:
//
//	static int Count;
//	Apple(int weight, string color) {
//		this->weight = weight;
//		this->color = color;
//		Count++;
//		id = Count;
//	}
//	int GetId() {
//		return id;
//	}
//	static int GetCount() {
//		return Count;
//	}
//	static void ChangeColor(Apple& apple, string color) {
//		apple.color = color;
//	}
//	void ChangeColor(string color) {
//		this->color = color;
//	}
//
//private:
//	int weight;
//	string color;
//	int id;
//};
//
//int Apple::Count = 0;
//
//
//int main() {
//	Apple apple(150, "Red");
//	Apple::ChangeColor(apple, "Green");
//	Apple apple2(100, "Green");
//	Apple apple3(159, "Yellow");
//	cout << apple.GetId() << endl;
//	cout << apple2.GetId() << endl;
//	cout << apple3.GetId() << endl;
//
//	cout << Apple::GetCount() << endl;
//}
