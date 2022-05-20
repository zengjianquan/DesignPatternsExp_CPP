#pragma once
#include"IAbstractFactory.h"

class ApplicationAbstractFactory {
private:
	IAbstractFactory* abstractFactory;

public:
	ApplicationAbstractFactory(IAbstractFactory* abstractFactory) :
		abstractFactory(abstractFactory) {
	}

	~ApplicationAbstractFactory()
	{
		delete abstractFactory;
	}

public:
	void DoWork() {
		IPrint* printObject = abstractFactory->CreatorPrinter();
		printObject->DoWork();

		ICout* coutObject = abstractFactory->CreatorCouter();
		coutObject->ToDo();

		delete printObject;
		delete coutObject;
	}
};