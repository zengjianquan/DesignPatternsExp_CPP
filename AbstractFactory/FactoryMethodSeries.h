#pragma once
#include"IFactoryMethodSeries.h"
#include"ClassSeries.h"

/*
* 系列工厂具体实现1
*/
class PrintClass1Factory : public IPrintFactory {
public:
	virtual IPrint* Creator() {
		return new PrintClass1();
	}
};

class CoutClass1Factory : public ICoutFactory {
public:
	virtual ICout* Creator() {
		return new CoutClass1();
	}
};

/*
* 系列工厂具体实现1, 系列工厂具体实现2, 系列工厂具体实现3, .....
*/