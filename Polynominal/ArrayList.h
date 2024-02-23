#pragma once
#include <iostream>

template <typename MyType>
class ArrayList {
public:
	ArrayList();
	ArrayList(int i);
	ArrayList(int i, long long value);
	int operator += (const ArrayList<MyType>& arrayList);
	int operator -= (const ArrayList<MyType>& arrayList);
	void clear();
	bool contains(MyType* n);
	void del(int index);
	MyType* get(int index) const;
	int getCapacity() const;
	int getLength() const;
	int indexOf(MyType* n);
	MyType* pop(int index);
	void print(int i);
	void printAll();
	void push(MyType* n);
	void put(MyType* n, int index);
private:
	int capacity, length;
	MyType* mas;

	void makeLonger();
};