#pragma once
#include <iostream>
using namespace std;

//IObserver.h
class IObserver {
public:
	virtual ~IObserver() {};
public:
	virtual void Update() = 0;
};

//other observer.h
class ObserverI1 : public IObserver {
public:
	virtual void Update() {
		cout << "ObserverI1 update" << endl;
	}
};

class ObserverI2 : public IObserver {
public:
	virtual void Update() {
		cout << "ObserverI2 update" << endl;
	}
};

//....

//ISubject.h
#include<list>
class ISubject {
	list<IObserver*> Observers;
public:
	virtual ~ISubject(){
		for (list<IObserver*>::iterator it = Observers.begin(); it != Observers.end(); it ++) {
			delete *it;
		}
	}

public:
	virtual void AddObserver(IObserver *iObserver) {
		Observers.push_back(iObserver);
	}

	virtual void RemoveObserver(IObserver* iObserver) {
		Observers.remove(iObserver);
	}

	virtual void Notify() {
		for (list<IObserver*>::iterator it = Observers.begin(); it != Observers.end(); it++) {
			(*it)->Update();
		}
	}
};


//other subject.h
class Subject1 : public ISubject {
public:
	Subject1() {};

public:

};