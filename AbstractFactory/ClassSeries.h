#pragma once
#include "IClassSeries.h"
/*
* 系列实现1
*/
class PrintClass1 : public IPrint {
public:
	virtual void DoWork() {
		cout << "PrintClass1 dowork" << endl;
	}
};

class CoutClass1 : public ICout {
public:
	virtual void ToDo() {
		cout << "CoutClass1 ToDo" << endl;
	}
};

/*
* 系列实现2, 系列实现3, 系列实现4, ......
*/
