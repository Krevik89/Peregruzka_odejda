#pragma once
#include<iostream>
using namespace std;

class Overcoat
{
	const char* type;
	double price;
public:
	Overcoat(const char* type, double price): type(type), price(price) {}
		
	bool operator==(const Overcoat& s1) const {
		if (strcmp(this->type, s1.type) == 0) {
			cout << "Типы равны";
			return true;
		}
		else cout << "Типы не равны";
		return false;
	}
	Overcoat& operator= (const Overcoat& s1){
		type = s1.type;
		price = s1.price;
		return *this;
	}
	bool operator>(const Overcoat& s1) const {
		return strcmp(type, s1.type) == 0 && price > s1.price;
	}
};

