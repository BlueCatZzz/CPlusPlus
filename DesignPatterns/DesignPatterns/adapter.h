#pragma once
#include <iostream>
#include <memory>

class ITarget
{
protected:
	ITarget() {};
public:
	virtual void Request() = 0;
};

class Adaptee
{
public:
	virtual void SpecialRequest() { std::cout << "Special Request!" << std::endl; }
};

//ÀàÊÊÅäÆ÷
class ClassAdapter : public ITarget, Adaptee
{
public:
	void Request() { std::cout << "ClassAdapter Request "; SpecialRequest(); }
};

//¶ÔÏóÊÊÅäÆ÷
class ObjectAdapter : public ITarget
{
private:
	std::shared_ptr<Adaptee> adaptee_;
public:
	ObjectAdapter(std::shared_ptr<Adaptee> adaptee)
		: adaptee_(adaptee) {}
	void Request() { std::cout << "ObjectAdapter Request "; adaptee_->SpecialRequest(); }
};