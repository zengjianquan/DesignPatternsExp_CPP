#pragma once
#include"IClassSeries.h"

/*
* 抽象工厂
* 将一个系列的接口同一整合到一个工厂内
* 通过抽象工厂的具体实现类实现的对象创建方法可以保证为同一系列的接口
*/
class IAbstractFactory {
public:
	virtual ~IAbstractFactory(){}

public:
	virtual IPrint* CreatorPrinter() = 0;

	virtual ICout* CreatorCouter() = 0;
};
