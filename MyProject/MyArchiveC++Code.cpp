//#include <iostream>
//using namespace std;
//void FillArray(int* const arr, const int size) {
//	for (int i = 0; i < size; i++)
//	{
//			arr[i] = rand() % 10;
//	}
//}
//void ShowArray(const int* const arr, const int size) {
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//int main() {
//
//	 int size = 10;
//	 int* firstArray = new int[size];
//	 int* secondArray = new int[size];
//	 cout << "======================================" << endl;
//	FillArray(firstArray, size);
//	FillArray(secondArray, size);
//
//	cout << "FirstArray =\t" << endl;
//	ShowArray(firstArray, size);
//	cout << "SecondArray =\t" << endl;
//	ShowArray(secondArray, size);
//
//	delete[] firstArray;
//	firstArray = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		firstArray[i] = secondArray[i];
//
//	}
//
//
//		 delete[] secondArray;
//		 delete[] firstArray;
//	     
//
//}
/*-------------------------------------------------------*/
//#include <iostream>
//
//using namespace std;
//
//void FillArray(int* const arr, const int size) {
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 10;
//	}
//}
//
//
//void ShowArray(const int* const arr, const int size) {
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//int main() {
//
//}
/*-------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//int main() {
//	int rows;
//	int cols;
//
//	cout << "Enter rows cout - " << endl;
//	cin >> rows;
//	cout << "Enter cols cout - " << endl;
//	cin >> cols;
//
//
//	int** arr = new int*[rows];
//	for (int i = 0; i < rows; i++)
//	{
//		arr[i] = new int[cols];
//	}
//
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			arr[i][j] = rand() % 20;
//		}
//
//	}
//
//
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl;
//
//	}
//
//
//	for (int i = 0; i < rows; i++)
//	{
//		delete[] arr[i];
//	}
//	delete [] arr;
//
//
//}
/*-------------------------------------------------------*/
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int size = 0;
//	cout << "Enter array size" << endl;
//	cin >> size;
//	int* arr = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 10;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << "\t";
//
//		cout << arr + i << endl;
//	}
//	delete [] arr;
//
//}
/*-------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//int main() {
//	int* pa = new int;
//	*pa = 10;
//	cout << *pa << endl;
//	delete pa;
//
//	pa = nullptr;
//	if (pa != nullptr) {
//
//		cout << pa << endl;
//	}
//	delete pa;
//}
/*-------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//
//void Foo(int& a, int &b, int &c) 
//{
//	a = 10;
//	b *= 2;
//	c -= 100;
//
//}
//
//
//int main() {
//
//	int a = 0, b = 4, c = 36;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	
//	cout << "Foo" << endl;
//	Foo(a, b, c);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//}
/*-------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//void foo(int a) {
//	a = 1;
//}
//
//void foo2(int& a) {
//	a = 2;
//}
//
//void foo3(int* a) {
//	*a = 3;
//}
//
//int main() {
//
//	int value = 5;
//	cout << "Value = " << value << endl;
//	cout << "Foo = " << endl;
//	foo(value);
//	cout << "Value = " << value << endl << endl;
//
//	cout << "Foo2 = " << value << endl;
//	foo2(value);
//	cout << "Value = " << value << endl << endl;
//	cout << "Foo3 = " << value << endl;
//	foo3(&value);
//	cout << "Value = " << value << endl << endl;;
//	
//}
/*-------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//void Foo(int *pa, int *pb, int *pc) {
//	(*pa) = 34;
//	(*pb)++;
//	(*pc) = -20;
//}
//
//int main() 
//{
//	int a = 0, b = 0, c = 1;
//	cout << "a = " <<  a  << endl;
//	cout << "b = " << a << endl;
//	cout << "c = " << a << endl;
//
//	cout << "Foo " << endl;
//	Foo(&a, &b, &c);
//	cout << a << endl;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << a << endl;
//	cout << "c = " << a << endl;
//	 
//}
/*-------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//
//int main() 
//{
//	int a = 5;
//	cout << "a\t" << a << endl;
//
//	int* px = &a;
//
//	int* px2 = &a;
//	cout << "px\t" << px << endl;
//	cout << "px2\t" << px2 << endl;
//
//	*px2 = 2;
//
//	cout << "a\t" << a << endl;
//
//}
/*-------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//int Fact(int N) {
//	if (N == 0)
//		return 0;
//	if (N == 1)
//		return 1;
//	return N * Fact(N - 1);
//
//}
//
//int main()
//{
//	cout << Fact(5) << endl;
//	
//}
/*-------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//void foo(int a = 5, double b = 34.2) {
//	for (int i = 0; i < a; i++)
//	{
//		cout << "#" << endl;
//	}
//}
//int main() {
//
//	foo();
//
//}
/*-------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//int value;
//
//void foo(int value) {
//
//	value++;
//
//}
//int main() {
//	foo(2);
//
//	cout << value << endl;
//}
/*-------------------------------------------------------*/
//#include <iostream>
//
//using namespace std;
//void foo(int a, int b);
//
//int main() {
//
//	foo(5, 3);
//
//}
//
//void foo(int a, int b) {
//
//	cout << "I'm a function I've been called!" << endl;
//}
/*-------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//void fillarray(int arr[], const int size) {
//	int a = sizeof(arr);
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 10;
//	}
//}
//void PrintArray(int arr[], const int size) {
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << endl;
//	}
//}
//
//int main() {
//
//	const int SIZE = 10;
//	int arr[SIZE];
//
//	int a = sizeof(arr);
//
//	fillarray(arr, SIZE);
//	PrintArray(arr, SIZE);
//
//}
/*-------------------------------------------------------*/
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//
//	const int ROWS = 5;
//	const int COLS = 8;
//
//	int arr[ROWS][COLS];
//
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			arr[i][j] = rand() % 10;
//		}
//	}
//
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//}
/*-------------------------------------------------------*/
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main() 
//{
//	const int ROW = 3;
//	const int COL = 4;
//	int aa[ROW][COL]
//	{
//		{2,3,45,21},
//		{23,123,231,31},
//	    {33,23,12,23}
//	};
//
//	int a;
//	a = 0;
//
//}
/*-------------------------------------------------------*/
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main() {
//
//	srand(time(NULL));
//	const int SIZE = 10;
//	int arr[SIZE];
//
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand() % 1043;
//	}
//	for (int i = 0; i < SIZE; i++) {
//		cout << arr[i] << endl;
//	}
//
//}
/*-------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//int main() {
//int arr[]{ 34, 23, 31 ,43 ,13 };
//
//	cout << sizeof(arr)/sizeof(arr[0]) << endl;
//
//	/*for (int i = 0; i < 5; i++) {
//		cout << arr[i] << endl;
//	}
//	*/
//	
//}
/*-------------------------------------------------------*/
/*#include <iostream>
using namespace std;

int main() {
	const int size = 5;
	int many[size]{ 34, 23, 34, 342, 342 };

	for (int i = 0; i < size; i++) {
		cout << many[i] << endl;
		//cout << "Number of elements in the array - " << i << endl;
	}
}
*/

/*-------------------------------------------------------*/
/*#include <iostream>
using namespace std;

int main() {


	for (int i = 1; i < 5; i++)
	{
		cout << "1st cycle worked - " << i << endl;
		for (int a = 0; a < 10; a++)
		{
			cout << "\t2nd cycle worked - " << a << endl;

		}
	}
}
*/

/*-------------------------------------------------------*/
/*#include <iostream>
using namespace std;
int sum(int a, int b) {
	int c =
	c = a * b;

}
int main() {
	int a = 5;

	int b = 4;

	int c;

	c = sum(a, b);

	cout << c << endl;

}
*/

/*-------------------------------------------------------*/
/*#include <iostream>
using namespace std;

int main() {

	cout << "One" << endl;

	goto link;

	cout << "Two" << endl;

	cout << "Three" << endl;

	link:

	cout << "Four" << endl;

	cout << "Five" << endl;


}
*/

/*-------------------------------------------------------*/
/*#include <iostream>
using namespace std;

int main() {

	int sum = 0;

	int rangeBegin, rangeEnd;

	cout << "Enter the beginning of the range." << endl;
	cin >> rangeBegin;

	cout << "Enter the end of the range." << endl;
	cin >> rangeEnd;

	do {


		if (rangeBegin % 2 != 0) {

			sum += rangeBegin;
		}

		rangeBegin++;
	} while (rangeBegin < rangeEnd);

	cout << "Sum of all odd numbers = " << sum << endl;
}
*/

/*-------------------------------------------------------*/
/*#include <iostream>
using namespace std;

int main() {

	int symbolCount;
	char symbol;
	int lineType;
	int index = 0;


	cout << "Enter the number of characters in the line" << endl;
	cin >> symbolCount;

	cout << "Enter char" << endl;
	cin >> symbol;

	cout << "Choose line type:" << endl
		<< "1 - Vertical line" << endl
		<< "2 - Horizontal line" << endl;

	cin >> lineType;

	if (lineType != 1 && lineType != 2) {
		cout << "Incorrect line type" << endl;
		return;
	}



	while (index < symbolCount) {

		if (lineType == 1) {
			cout << symbol << endl;
		}
		if (lineType == 2) {
			cout << symbol;
		}
		index++;
	}

	cout << endl << endl;


}
*/

/*-------------------------------------------------------*/
/*#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int result;
	cout << "Entered 2 numbers - " << endl;
	cin >> a >> b;
	cout << "Choose a math operation - " << endl << "1.Addition" << endl
		<< "2.Subtraction" << endl << "3.Multiplication" << endl
		<< "4.Division" << endl;

	cin >> result;

	switch (result) {
	case 1:
		cout << "Addition result - " << a + b;
		break;
	case 2:
		cout << "Subtraction result - " << a - b;
		break;
	case 3:
		cout << "Multiplication result - " << a * b;
		break;
	case 4:
		cout << "Division result - " << a / b;
		break;
	default:
		cout << "You made a mistake in choosing an operation!" << endl;
		break;
	}
}
*/

/*-------------------------------------------------------*/
/*#include <iostream>
using namespace std;

int main()
{
	int i = 18;

	do {
		cout << "Varible a = " << i << endl;
		i++;
	} while (i < 20);



}
*/

/*-------------------------------------------------------*/
/*#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	if (x == 2 || x == 4 || x == 6 || x == 8 || x == 10) {
		cout << "Even number." << endl;
	}
	else {
		cout << "The number is not even." << endl;
	}

}
*/

/*-------------------------------------------------------*/
/*#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cout << a << "\n";

	a += 20;
	cout << a << "\n";

	a = a + 20;
	cout << a << "\n";

	a -= 10;
	cout << a << "\n";

	a *= 25;
	cout << a << "\n";

	a /= 4;
	cout << a << "\n";

}
*/

/*-------------------------------------------------------*/
/*#include <iostream>

using namespace std;

int main()
{
	int a = 2, b;
	b = ++a * a;
	cout << b << "\n";
	cout << a;

}
*/

/*-------------------------------------------------------*/
/*#include <iostream>

using namespace std;

int main()
{
	int a = 3, b = 6, c = 2;
	int to = (a + b + c) / 3;
	cout << to;


}
*/

/*-------------------------------------------------------*/
/*
int main()
{
	int a, b, c;
	cout << "Enter 3 nmubers - ";
	cin >> a >> b >> c;
	cout << "You entered the number - " << a << "\n";
	cout << "You entered the number - " << b << "\n";
	cout << "You entered the number - " << c << "\n";

}
*/

/*-------------------------------------------------------*/
/*#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter 3 nmubers - ";
	cin >> a >> b >> c;
	cout << "You entered the number - " << a << "\n";
	cout << "You entered the number - " << b << "\n";
	cout << "You entered the number - " << c << "\n";

}
*/

/*-------------------------------------------------------*/
/*#include <iostream>


Escape - sequences.
\n - начать с новой строки.
\t - перейти к следующей позиции табуляции.
\b - Удаление последнего выведенного символа.

using namespace std;

int main()
{
	const int COUNT_DAYS_IN_WEEK = 7;
	const char NEW_LINE = '\n';
	const char NEW_TAB = '\t\t';

	cout << COUNT_DAYS_IN_WEEK << NEW_LINE << NEW_TAB;


}
*/

/*-------------------------------------------------------*/
/*
#include <iostream> // Эта библиотека отвечает, за ввод и вывод данных в консоль.
// #include - это деректива препроцессора, как наша программа вообще будет собира.
#include <Math.h> // Эта библиотека матем - операций.
using namespace std; // Вызов пространства имеен позволяет понять ком - что мы от него хотим.
// Пространство имен упрощает написание кода.
int main()
{

	cout << "Hello world!"; // Вывод в консоль

}

*/
