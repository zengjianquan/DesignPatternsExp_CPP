#pragma once
#include"IClass.h"
class IPrintFactory {
public:
	virtual ~IPrintFactory(){}

public:
	virtual IPrint* CreatePrintClass() = 0;
};


//具体工厂
//应该在别的 factory.h 中实现 
//这样 也OK
class PrintClassFactory : public IPrintFactory {
public:
	virtual IPrint* CreatePrintClass() {
		return new PrintClass();
	}
};

class CoutClassFactory : public IPrintFactory {
public:
	virtual IPrint* CreatePrintClass() {
		return new CoutClass();
	}
};