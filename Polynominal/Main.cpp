#include "ZeroDenominatorException.h"
#include "Fraction.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	std::ifstream ifs("input.txt");
	std::string str;
    while (getline(ifs, str)) { // ���� �� ��������� ����� ����� ������ ��������� ������ � ���������� (s)
        cout << str << endl; // ������� �� �����
        str += "+"; // ��� ������ ������ �� ������� �������� � �������� ������ � ����� ������ ������
        cout << str << endl; // � ����� ������ �� ����� �� ��� ���������������� ������ (��� ������ �� � ����)
    }
}