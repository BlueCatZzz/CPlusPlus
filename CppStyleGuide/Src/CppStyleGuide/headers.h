#ifndef CPP_STYLE_GUIDE_HEADERS_H
#define CPP_STYLE_GUIDE_HEADERS_H

#include <windows.h>
#include <iostream>
#include <thread>

class HeadersBuilder;
class Headers
{
public:
	bool Init() { return true; }
	inline void SetMeber1(int member1) { member1_ = member1; }
	inline int GetMember1() { return member1_; };

private:
	int member1_;
};

class HeadersBuilder
{
public:
	std::shared_ptr<Headers> Create();
};
#endif // CPP_STYLE_GUIDE_HEADERS_H
