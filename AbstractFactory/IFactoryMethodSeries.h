#pragma once
#include"IClassSeries.h"

/*
* 系列工厂抽象基类
*/
class IPrintFactory {
public:
	~IPrintFactory(){}

public:
	virtual IPrint* Creator() = 0;
};

class ICoutFactory {
public:
	~ICoutFactory() {}

public:
	virtual ICout* Creator() = 0;
};