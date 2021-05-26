/* 类
1、构造函数的职责
	- 不要在构造函数中调用虚函数, 也不要在无法报出错误时进行可能失败的初始化.
2、隐式类型转换
3、可拷贝类型和可移动类型
	- 
*/
#ifndef CPP_STYLE_GUIDE_CLASS_H
#define CPP_STYLE_GUIDE_CLASS_H

#include <memory>

namespace CppStyleGuide {
class Class
{
public:
	explicit Class(double num) {};
	inline bool Init() const { return true; }
};

class ClassBuilder
{
	std::shared_ptr<Class> Create();
};
}	// namespace CppStyleGuide

#endif	//CPP_STYLE_GUIDE_CLASS_H
