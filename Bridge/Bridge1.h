#pragma once
#include <iostream>
using namespace std;

/*
* 将工作和操作分离开来
* 不同版本的子类实现会执行不同的工作 DoWork
* 
*/
class AbsTraction_Bridge {
protected:
	class AbsTractionImp* absTractionImp;	//指向 AbsTractionImp 的指针

	AbsTraction_Bridge(AbsTractionImp* absTractionImp) :
		absTractionImp(absTractionImp)
	{}

public:
	~AbsTraction_Bridge() {}

public:
	virtual void DoWork() = 0;
	virtual void ToDo() = 0;
};


/*
* 通过实现工具子类
* 被不同业务版本进行调用
*/
class AbsTractionImp {
public:
	AbsTractionImp() {}
	~AbsTractionImp() {}

public:
	virtual void Operation() = 0;
	virtual void Operation_Others() = 0;
};


//只实现 Lite 版本的 AbsTraction_Bridge
class AbsTraction_BridgeLite : public AbsTraction_Bridge {
public:
	AbsTraction_BridgeLite(AbsTractionImp* absTractionImp) :
		AbsTraction_Bridge(absTractionImp) {
	}

public:
	virtual void DoWork() {
		cout << "AbsTraction_BridgeLite DoWork" << endl;
		absTractionImp->Operation();
	}

	virtual void ToDo() {
		cout << "AbsTraction_BridgeLite ToDo" << endl;
		absTractionImp->Operation_Others();
	}
};

//perfect版本
//..............
//..............


//只实现 print 工具接口
class PrintAbsTractionImp : public AbsTractionImp {
public:
	PrintAbsTractionImp(){}

public:
	virtual void Operation() {
		cout << "PrintAbsTractionImp Operation" << endl;
	}

	virtual void Operation_Others() {
		cout << "PrintAbsTractionImp Operation_Others" << endl;
	}
};

//cout
//..............
//..............

