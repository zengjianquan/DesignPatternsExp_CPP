#pragma once
#include<iostream>
using namespace std;

class Component {
public:
	Component(){}
	virtual ~Component(){}

public:
	virtual void Dowork() = 0;
};

//各种实现的component
class PrintComponent : public Component {
public:
	PrintComponent(){}

public:
	virtual void Dowork() {
		cout << "PrintComponent Dowork" << endl;
	}
};

class CoutComponent : public Component {
public:
	CoutComponent() {}

public:
	virtual void Dowork() {
		cout << "CoutComponent Dowork" << endl;
	}
};


//对具体component实现一些额外操作(职责)
//例如: 读操作, 写操作
class ReadPrintComponent : public PrintComponent {
public:
	ReadPrintComponent(){}

public:
	virtual void Dowork() {
		//TODO : 做一些操作
		cout << "Read PrintComponent TODO Sth..." << endl;
		//...
		PrintComponent::Dowork();
	}
};

class ReadCoutComponent : public CoutComponent {
public:
	ReadCoutComponent(){}

public:
	virtual void Dowork() {
		//TODO : 做一些操作
		cout << "Read CoutComponent TODO Sth..." << endl;
		//...
		CoutComponent::Dowork();
	}
};


class WritePrintComponent : public PrintComponent {
public:
	WritePrintComponent(){}

public:
	virtual void Dowork() {
		//TODO : 做一些操作
		cout << "Write PrintComponent TODO Sth..." << endl;
		//...
		PrintComponent::Dowork();
	}
};

class WriteCoutComponent : public CoutComponent {
public:
	WriteCoutComponent() {}

public:
	virtual void Dowork() {
		//TODO : 做一些操作
		cout << "Write CoutComponent TODO Sth..." << endl;
		//...
		CoutComponent::Dowork();
	}
};

// 大量使用继承, 导致类的数量增的非常多
// 应该优先使用组合而不是使用继承
// 已生成 1 + 2 + 2 * 2 个类
// 
// 将 n 设为component具体数量, m 设为对component进行操作的种类数量
// 总体需要生成的子类为 1 + n + n * m 个子类