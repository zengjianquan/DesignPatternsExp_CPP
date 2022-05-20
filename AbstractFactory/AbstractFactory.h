#pragma once

#include"IAbstractFactory.h"
#include"ClassSeries.h"

/*
* 抽象工厂具体实现类
* 创建同一系列的具体接口类
*/
class AbstractFactoryClass1 : public IAbstractFactory{
public:
	virtual IPrint* CreatorPrinter() {
		return new PrintClass1();
	}

	virtual ICout* CreatorCouter() {
		return new CoutClass1();
	}
};