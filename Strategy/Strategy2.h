#pragma once
#include <iostream>
using namespace std;

//TaxStrategy 所有tax基类
class TaxStrategy {
public:
	virtual void CaculateTax() = 0;
	virtual ~TaxStrategy(){}
};

class CNTaxStrategy : public TaxStrategy{
public:
	virtual void CaculateTax() {
		//...
		cout << "CNTaxStrategy CaculateTax" << endl;
	}
};

class USTaxStrategy : public TaxStrategy {
public:
	virtual void CaculateTax() {
		//...
		cout << "USTaxStrategy CaculateTax" << endl;
	}
};

class DETaxStrategy : public TaxStrategy {
public:
	virtual void CaculateTax() {
		//...
		cout << "DETaxStrategy CaculateTax" << endl;
	}
};


class SalesOrderStrategy {
	TaxStrategy* Strategy;

public:
	SalesOrderStrategy(TaxStrategy* strategy):Strategy(strategy){}
	~SalesOrderStrategy() {
		delete Strategy;
	}
	void CaculateTax() {
		Strategy->CaculateTax();
	}

};