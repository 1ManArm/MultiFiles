#include <iostream>
#include "Functions.h"
#include "Structures.h"
#include "Data.h"




int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	
	//������� ������� � ��������� �����
	/*std::cout << "������� ��� ����� -> ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;
	hi();*/

	const int size = 10;
	int arr[size]{ 1, 2, 3 };
	print_arr(arr, size);

	person p1{
		"Ralph Evans",
		26,
		"Programmer",
		80000
	};

	_A = 5;

	print_person(p1);

	_A = 10;
	std::cout << "A = " << _A << std::endl;
	std::cout << "PI = " << _PI << std::endl;
	std::cout << "E = " << _E << std::endl;

	return 0;
}


//������� ���������� ������������� ��������:
//1. ��������� ������;
//2. ���������� ���� �� ������� ��� �������� ������ � ��������;
//3. �������� ����������� ���������.