#pragma once
#include"FactoryMethod.h"

class Application_FactoryMethod {
private:
	IPrintFactory* factory;
public:
	Application_FactoryMethod(IPrintFactory* factory) :
		factory(factory)
	{}

public:
	void DoWork() {
		IPrint* printObject = factory->CreatePrintClass();	//运行时创建具体类
		printObject->PrintFunc();
	}
};