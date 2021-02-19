#pragma once
#include <string>

class IColor
{
protected:
	IColor() {};
public:
	virtual std::string GetColorName() = 0;
};

class RedColor : public IColor
{
public:
	std::string GetColorName() { return "Red"; }
};

class BlueColor : public IColor
{
public:
	std::string GetColorName() { return "Blue"; }
};