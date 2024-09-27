#pragma once
class Vector
{
	int* arr;
	int size;
	friend ostream& operator<< (ostream& os, Vector& obj);
	friend istream& operator>> (istream& is, Vector& obj);
public:
	Vector();
	~Vector();
	Vector(const Vector & obj);

	Vector(int s);
	void InputRand(); // ������������� ���� �������
	void Print();// ����� �� �������

	void PushBack(int a);
	int PopBack();


	int* GetArr();
	int GetSize();

	void SetSize(int s);
	void SetArr(int* array);



	/// ���������� ��������
	//Vector operator-(int a);
	Vector operator+(int a);
	Vector operator+(Vector b);
	Vector operator*(int a);

	Vector& operator++();
	Vector operator++(int);
	 
	Vector& operator--();
	Vector operator--(int);

	//Vector& operator+=(int a);
	//Vector& operator-=(int a);
	//Vector& operator*=(int a);
	//Vector& operator/=(int a);




};
