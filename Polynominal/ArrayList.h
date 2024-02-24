#pragma once

template <typename MyType>
class ArrayList {
public:
	ArrayList() {
		capacity = 0;
		length = 0;
		mas = new MyType[0];
	}
	ArrayList(int i) {
		capacity = i;
		length = 0;
		mas = new MyType[i];
	}
	ArrayList(int i, MyType defaultValue) {
		capacity = i;
		length = 0;
		mas = new MyType[i];
		for (int j = 0; j < i; j++) {
			mas[i] = defaultValue;
		}
	}
	int operator += (const ArrayList<MyType>& arrayList) {
		for (int i = arrayList.getLength(); i > -1; i--) {
			(*this).get() += arrayList;
		}
		return *this;
	}
	int operator -= (const ArrayList<MyType>& arrayList) {
		for (int i = arrayList.getLength(); i > -1; i--) {
			(*this).get() -= arrayList;
		}
		return *this;
	}
	void clear() {
		for (int i = 0; i < length; i++) {
			delete& mas[i];
		}
		delete[] mas;
		capacity = 0;
		length = 0;
		mas = new MyType[0];
	}
	bool contains(MyType* n) {
		return !(indexOf(n) == -1);
	}
	void del(int index) {
		delete pop(index);
	}
	MyType* get(int index) const {
		return &mas[index];
	}
	int getCapacity() const {
		return capacity;
	}
	int getLength() const {
		return length;
	}
	int indexOf(MyType* n) {
		for (int i = 0; i < length; i++) {
			if (*n == mas[i]) {
				return i;
			}
		}
		return -1;
	}
	MyType* pop(int index) {
		MyType* temp = &mas[index];
		for (int i = index; i < length - 1; i++) {
			mas[i] = mas[i + 1];
		}
		length--;
		return temp;
	}
	void push(MyType n) {
		if (capacity == length) {
			makeLonger();
		}
		mas[length] = n;
		length++;
	}
	void put(MyType n, int index) {
		if (capacity == length) {
			makeLonger();
		}
		for (int i = length; i > index - 1; i--) {
			mas[i] = mas[i - 1];
		}
		mas[index] = MyType(n);
		length++;
	}
private:
	int capacity, length;
	MyType* mas;

	void makeLonger() {
		MyType* masTemp = new MyType[int(capacity * 1.5) + 1];
		for (int i = 0; i < capacity; i++) {
			masTemp[i] = MyType(mas[i]);
		}
		capacity = int(capacity * 1.5) + 1;
		delete[] mas;
		mas = masTemp;
	}
};