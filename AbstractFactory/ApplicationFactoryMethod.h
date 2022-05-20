#pragma once
#include"IFactoryMethodSeries.h"

class ApplicationFactoryMethod {
private:
	IPrintFactory* printFactory;
	ICoutFactory* coutFactory;

public:
	ApplicationFactoryMethod(IPrintFactory* printFactory, ICoutFactory* coutFactory):
		printFactory(printFactory), coutFactory(coutFactory)
	{}

	~ApplicationFactoryMethod()
	{
		delete printFactory;
		delete coutFactory;
	}

public:
	void DoWork() {
		IPrint* printObject = printFactory->Creator();
		printObject->DoWork();

		ICout* coutObject = coutFactory->Creator();
		coutObject->ToDo();

		delete printObject;
		delete coutObject;
	}
};
