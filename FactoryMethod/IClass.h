#pragma once
#include<iostream>
using namespace std;

class IPrint {
public:
	virtual ~IPrint() {}

public:
	virtual void PrintFunc() = 0;
};