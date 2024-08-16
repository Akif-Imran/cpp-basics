// cpp-basics.cpp : Defines the entry point for the application.
//

#include "cpp-basics.h"

using namespace std;

int main()
{
	/*
	int xyz = 6760;
	int* addressXYZ = &xyz;
	std::cout << "Memory address of variable xyz: " << &xyz << std::endl;
	std::cout << "Memory address of variable xyz: " << addressXYZ << std::endl;
	*/
	//----------------------------------------------------------------------------------
	//---------------------------------------07-01--------------------------------------
	/*
	int a = 10;
	int b = 20;
	int* x = &a;
	int* y = &b;
	std::cout << "Address of a: " << x << " == " << &a << std::endl;
	std::cout << "Address of b: " << y << " == " << &b << std::endl;
	std::cout << "Value of a through pointer: " << *x << " == " << a << std::endl;
	std::cout << "Address of b through pointer: " << *y << " == " << b << std::endl;
	*/
	//----------------------------------------------------------------------------------
	//---------------------------------------07-02--------------------------------------
	/*

	Write a program to assign a value to a variable using its pointer
	variable. Print out the value using the variable neame and also print out the
	memory address of the variable using the pointer.
	*/
	/*
	int value = 23;
	int* pointer = &value;
	*pointer = 24;
	std::cout << "Variale value: " << value << "\t" << *pointer << std::endl;
	std::cout << "Pointer value: " << pointer << "\t" << &value << std::endl;
	*/
	//----------------------------------------------------------------------------------
	//void pointers
	void* p;
	std::string name = "Akif Imran";
	p = &name;
	std::cout << name << std::endl;
	std::cout << p << std::endl;

	//arrays and pointers
	int x[5] = { 4,2,3,4,5 };
	int* q;
	int* r;
	q = x;//& operator is not used, because x already has the address;
	r = &x[0];//& operator is used because of index specific access "x[0]" to get address;
	std::cout << "Address: " << q << std::endl;
	std::cout << "Address: " << r << std::endl;
	//---------------------------------------07-03--------------------------------------
	/*
	Write a programto input data into an array and then
	to print on the computer screen by using pointer notation.
	*/
	int size = 0;


	return 0;
}
// pointers.cpp : Defines the entry point for the application.
//
