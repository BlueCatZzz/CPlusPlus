#pragma once

#include <memory>
#include <iostream>
#include "IColor.h"

class Bag
{
protected:
	Bag() {};
public:
	void SetColor(std::shared_ptr<IColor> color) { color_ = color; }
	virtual void GetName() = 0;
protected:
	std::shared_ptr<IColor> color_;
};

class HandBag : public Bag
{
public:
	void ShowColor() { std::cout << color_->GetColorName() << std::endl; }
	void GetName() { std::cout << color_->GetColorName() << " HandBag" << std::endl; }
};
	
class Walet : public Bag
{
public:
	void ShowColor() { std::cout << color_->GetColorName() << std::endl; }
	void GetName() { std::cout << color_->GetColorName() << " Walet" << std::endl; }
};