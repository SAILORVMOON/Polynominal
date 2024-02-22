#include "ArrayList.h"

template<typename MyType>
ArrayList<MyType>::ArrayList() {
	capacity = 0;
	length = 0;
	mas = new MyType[0];
}
template<typename MyType>
ArrayList<MyType>::ArrayList(int i) {
	capacity = i;
	length = 0;
	mas = new MyType[i];
}
template<typename MyType>
ArrayList<MyType>::ArrayList operator += (const ArrayList<MyType>& arrayList1, const ArrayList<MyType>& arrayList2) {

	return *this;
}
template<typename MyType>
void ArrayList<MyType>::clear() {
	for (int i = 0; i < length; i++) {
		delete& mas[i];
	}
	delete[] mas;
	capacity = 0;
	length = 0;
	mas = new MyType[0];
}
template<typename MyType>
bool ArrayList<MyType>::contains(MyType* n) {
	return !(indexOf(n) == -1);
}
template<typename MyType>
void ArrayList<MyType>::del(int index) {
	delete pop(index);
}
template<typename MyType>
int ArrayList<MyType>::getCapacity() const {
	return capacity;
}
template<typename MyType>
int ArrayList<MyType>::getLength() const {
	return length;
}
template<typename MyType>
int ArrayList<MyType>::indexOf(MyType* n) {
	for (int i = 0; i < length; i++) {
		if ((*n).getValue() == mas[i].getValue()) {
			return i;
		}
	}
	return -1;
}
template<typename MyType>
MyType* ArrayList<MyType>::pop(int index) {
	MyType* temp = &mas[index];
	for (int i = index; i < length - 1; i++) {
		mas[i] = mas[i + 1];
	}
	length--;
	return temp;
}
template<typename MyType>
void ArrayList<MyType>::print(int i) {
	mas[i].print();
}
template<typename MyType>
void ArrayList<MyType>::printAll() {
	for (int i = 0; i < length; i++) {
		print(i);
	}
}
template<typename MyType>
void ArrayList<MyType>::push(MyType* n) {
	if (capacity == length) {
		makeLonger();
	}
	mas[length] = n;
	length++;
}
template<typename MyType>
void ArrayList<MyType>::put(MyType* n, int index) {
	if (capacity == length) {
		makeLonger();
	}
	for (int i = length; i > index - 1; i--) {
		mas[i] = mas[i - 1];
	}
	mas[index] = new MyType(n);
	length++;
}
template<typename MyType>
void ArrayList<MyType>::makeLonger() {
	MyType* masTemp = new MyType[int(capacity * 1.5) + 1];
	for (int i = 0; i < capacity; i++) {
		masTemp[i] = MyType(mas[i]);
	}
	capacity = int(capacity * 1.5) + 1;
	delete[] mas;
	mas = masTemp;
}