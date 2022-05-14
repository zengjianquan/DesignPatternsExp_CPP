#pragma once
#include <iostream>
using namespace std;

//抽象类
//具有一些执行功能(DoWork, ToDo)	不同的业务版本会有不同的执行方式
//具有一些操作功能(Operation, Operation_Others)	子类会实现不同的基本操作方式
class AbsTraction {
public:
	AbsTraction(){}
	~AbsTraction() {}

public:
	virtual void DoWork() = 0;
	virtual void ToDo() = 0;

public:
	virtual void Operation() = 0;
	virtual void Operation_Others() = 0;
};


//AbsTraction子类
//print, cout 实现了基本的操作内容 (进行print, cout)
class PrintAbsTraction : public AbsTraction {
public:
	PrintAbsTraction() {}
	~PrintAbsTraction() {}

public:
	virtual void Operation() {
		cout << "PrintAbsTraction Operation" << endl;
	}

	virtual void Operation_Others() {
		cout << "PrintAbsTraction Operation_Others" << endl;
	}
};

class CoutAbsTraction : public AbsTraction {
public:
	CoutAbsTraction() {}
	~CoutAbsTraction() {}

public:
	virtual void Operation() {
		cout << "CoutAbsTraction Operation" << endl;
	}

	virtual void Operation_Others() {
		cout << "CoutAbsTraction Operation_Others" << endl;
	}
};


//基于某些业务场景(版本)	Lite 和 Perfect 版本
//对print, cout实现不同的执行效果(DoWork)
class PrintAbsTractionLite : public PrintAbsTraction {
public:
	PrintAbsTractionLite(){}
	~PrintAbsTractionLite(){}

public:
	virtual void DoWork() {
		//不同版本的不同工作
		cout << "PrintAbsTractionLite DoWork" << endl;
		//...

		PrintAbsTraction::Operation();
	}

	virtual void ToDo() {
		//不同版本的不同工作
		cout << "PrintAbsTractionLite ToDo" << endl;
		//...

		PrintAbsTraction::Operation_Others();
	}
};

class PrintAbsTractionPerfect : public PrintAbsTraction {
public:
	PrintAbsTractionPerfect() {}
	~PrintAbsTractionPerfect() {}

public:
	virtual void DoWork() {
		//不同版本的不同操作
		cout << "PrintAbsTractionPerfect DoWork" << endl;
		//...

		PrintAbsTraction::Operation();
	}

	virtual void ToDo() {
		//不同版本的不同操作
		cout << "PrintAbsTractionPerfect ToDo" << endl;
		//...

		PrintAbsTraction::Operation_Others();
	}
};


//..............
//cout lite, perfect实现
//..............

/*
* 类似装饰模式的例子, 当业务功能版本改变, 会使得子类数量增加
* 同时, 由于 AbsTraction 抽象类具有 执行 和 操作 两个功能, 导致子类没法沿着各自的方向进行独立的变化
* 应该分离出两个抽象类, 再通过组合的方式进行改造
*/
