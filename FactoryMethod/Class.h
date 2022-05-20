#pragma once
#include"IClass.h"
class PrintClass : public IPrint {
public:
	PrintClass() {}

public:
	virtual void PrintFunc() {
		cout << "this is PrintClass Object" << endl;
	}
};

class CoutClass : public IPrint {
public:
	CoutClass() {}

public:
	virtual void PrintFunc() {
		cout << "this is CoutClass Object" << endl;
	}
};