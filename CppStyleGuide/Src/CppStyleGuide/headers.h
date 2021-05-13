#ifndef CPP_STYLE_GUIDE_HEADERS_H
#define CPP_STYLE_GUIDE_HEADERS_H

#include <windows.h>
#include <iostream>
#include <thread>

class Headers
{
public:
	inline void SetMeber1(int member1) { member1_ = member1; }
	inline int GetMember1() { return member1_; };
private:
	int member1_;
};
#endif // CPP_STYLE_GUIDE_HEADERS_H
