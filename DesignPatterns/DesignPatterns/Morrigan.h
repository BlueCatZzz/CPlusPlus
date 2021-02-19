#pragma once
#include <iostream>
#include <memory>

class Morrigan
{
protected:
	Morrigan() {};
public:
	virtual void Display() = 0;
};

class OrignalMorrigan : public Morrigan
{
public:
	void Display() { std::cout << "Orignal Morrigan" << std::endl; }
};

class ChangeMorrigan : public Morrigan
{
public:
	ChangeMorrigan(std::shared_ptr<Morrigan> morrigan) { decorat_morrigan_ = morrigan; }
	virtual void Display() { decorat_morrigan_->Display(); }
protected:
	std::shared_ptr<Morrigan> decorat_morrigan_;
};

class SuccubusMorrigan : public ChangeMorrigan
{
public:
	SuccubusMorrigan(std::shared_ptr<Morrigan> morrigan) : ChangeMorrigan(morrigan) {};
	void Display() { decorat_morrigan_->Display(); std::cout << " Change Succubus Morrigan" << std::endl; }
};

