#pragma once
#include<iostream>
using namespace std;

class Flat
{
    double area;
    double price;

public:
    Flat(double area, double price) : area(area), price(price) {}

    bool operator==(const Flat& s1) const {
        return area == s1.area;
    }

    bool operator>(const Flat& s1) const {
        return price > s1.price;
    }

    Flat& operator=(const Flat& s1) {
        if (this == &s1) {
            return *this;
        }

        area = s1.area;
        price = s1.price;

        return *this;
    }

};

