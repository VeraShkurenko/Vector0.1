#include<iostream>
#include"Vector.h"
using namespace std;

int main()
{
	srand(time(0));

	Vector obj1(5); //-------------  1 2 3 4 5
	obj1.InputRand();
	obj1.Print();

	Vector obj3 = obj1 - 2;// 1 2 3    
	obj3.Print();
	obj1.Print();

	Vector obj2 = obj1 + 5; // 1 2 3 4 5 0 0 0 0 
	obj2.Print();
	obj1.Print();

	Vector obj4(2);// 10 20
	Vector obj5 = obj1 + obj4; // 1 2 3 4 5 10 20
	obj4.Print();
	obj5.Print();


	//Vector obj6 = obj1 * 3; // 3 6 9 12 15 




	


}