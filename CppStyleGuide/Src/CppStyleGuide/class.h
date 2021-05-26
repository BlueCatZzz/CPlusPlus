/* 类
1、构造函数的职责
	- 不要在构造函数中调用虚函数, 也不要在无法报出错误时进行可能失败的初始化.
2、隐式类型转换
3、可拷贝类型和可移动类型
	- 
4、结构体 VS. 类
5、继承
6、多重继承
7、接口
	- 只有纯虚函数 (“=0”) 和静态函数 (除了下文提到的析构函数).
	- 没有非静态数据成员.
	- 没有定义任何构造函数. 如果有, 也不能带有参数, 并且必须为 protected.
	- 如果它是一个子类, 也只能从满足上述条件并以 Interface 为后缀的类继承.
8、存取控制
9、声明顺序
*/
#ifndef CPP_STYLE_GUIDE_CLASS_H
#define CPP_STYLE_GUIDE_CLASS_H

#include <memory>

namespace CppStyleGuide {
struct MyStruct
{
	int x;
	float y;
};

class Class
{
public:
	explicit Class(double num) {};
	inline bool Init() const { return true; }
	Class(const Class&) = delete;
	Class(const Class&&) = delete;
	Class& operator=(const Class&) = delete;
};

class ClassBuilder
{
	std::unique_ptr<Class> Create();
};
}	// namespace CppStyleGuide

#endif	//CPP_STYLE_GUIDE_CLASS_H
