#include <iostream>

using namespace std;

int** Create(int x, int y);
void Input(int** massive, int x, int y);
void Print(int** massive, int x, int y);

void main()
{
	int x, y;
	cout << "Enter numbers of rows: "; 
	cin >> x; //set the number of rows
	cout << "Enter numbers of columns: ";
	cin >> y;//set the number of columns
	int** I = Create(x, y);
	Input(I, x, y);
	Print(I, x, y);
}

int** Create(int x, int y) //create an array with given rows and columns 
{
	int** massive = new int* [x];
	for (int i = 0; i < x; i++)
	{
		massive[i] = new int[y];
	}
	//delete[] massive;
	return 0;
}

void Input(int** massive, int x, int y) // 
{
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			massive[i][j] = 1 + rand() % 100;
		}
	}

}

void Print(int** massive, int x, int y)
{
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << massive[i][j] << " ";
		}
		cout << endl;
	}
}