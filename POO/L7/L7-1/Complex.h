#pragma once
#include<iostream>
using namespace std;

class Complex {
	int re, im;
public:
	Complex();
	Complex(int, int);
	~Complex();
	void citire();
	void afisare();