#include "headers.h"
#include <iostream>
#include "Common/string_utils.h"
int main()
{
	std::string str = "111";
	Common::StringUtils::StrAddOne(str);
	/*Common::StringUtils::StrTest1(str);*/
	HeadersBuilder builder;
	auto&& headers = builder.Create();
	if (nullptr == headers)
		std::cout << "headers is nullptr." << std::endl;
	auto member1 = headers->GetConstMember1();
	member1 = 2;
	auto member2 = headers->GetConstMember1();
	std::cin.get();
	return 0;
}

//声明即初始化 在最小的范围内

//禁止定义静态储存周期非POD变量，
//禁止使用含有副作用的函数初始化POD全局变量，
//因为多编译单元中的静态变量执行时的构造和析构顺序是未明确的，这将导致代码的不可移植。