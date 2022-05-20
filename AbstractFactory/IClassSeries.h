#pragma once
#include <iostream>
using namespace std;

/*
* 系列接口
* IPrint 和 ICout 为一个系列的接口, 需要配合使用
*/
class IPrint {
public:
	virtual ~IPrint(){}

public:
	virtual void DoWork() = 0;
};

class ICout {
public:
	virtual ~ICout() {}

public:
	virtual void ToDo() = 0;
};
