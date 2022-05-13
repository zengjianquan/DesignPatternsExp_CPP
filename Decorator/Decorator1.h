#pragma once
#include<iostream>
using namespace std;

class Component_Decorator {
public:
	Component_Decorator() {}
	virtual ~Component_Decorator() {}

public:
	virtual void Dowork() = 0;
};

//各种实现的component
class PrintComponent_Decorator : public Component_Decorator {
public:
	PrintComponent_Decorator() {}

public:
	virtual void Dowork() {
		cout << "PrintComponent_Decorator Dowork" << endl;
	}
};

class CoutComponent_Decorator : public Component_Decorator {
public:
	CoutComponent_Decorator() {}

public:
	virtual void Dowork() {
		cout << "CoutComponent_Decorator Dowork" << endl;
	}
};


//装饰器, 对component进行额外操作(职责)添加
class Decorator : public  Component_Decorator {
private:
	Component_Decorator* component_Decorator;

public:
	Decorator(Component_Decorator* compoent_Decorator):
		component_Decorator(compoent_Decorator)
	{}
	virtual ~Decorator(){
		delete component_Decorator;
	}

public:
	virtual void Dowork() {
		component_Decorator->Dowork();
	}
};

class ReadDecorator : public Decorator {
public:
	ReadDecorator(Component_Decorator* compoent_Decorator):
		Decorator(compoent_Decorator)
	{}
	~ReadDecorator(){}

public:
	virtual void Dowork() {
		//TODO : 做一些操作
		cout << "Read Component TODO Sth..." << endl;
		//...
		Decorator::Dowork();
	}
};

class WriteDecorator : public Decorator {
public:
	WriteDecorator(Component_Decorator* compoent_Decorator) :
		Decorator(compoent_Decorator) 
	{}
	~WriteDecorator(){}

public:
	virtual void Dowork() {
		//TODO : 做一些操作
		cout << "Write Component TODO Sth..." << endl;
		//...
		Decorator::Dowork();
	}
};