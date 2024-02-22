#include "ZeroDenominatorException.h"
#include "Fraction.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	std::ifstream ifs("input.txt");
	std::string str;
    while (getline(ifs, str)) { // пока не достигнут конец файла класть очередную строку в переменную (s)
        cout << str << endl; // выводим на экран
        str += "+"; // что нибудь делаем со строкой например € добавл€ю плюсик в конце каждой строки
        cout << str << endl; // и снова вывожу на экран но уже модифицированную строку (без записи ее в файл)
    }
}