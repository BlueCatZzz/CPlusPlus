/* 作用域
1、命名空间
	- 禁止用内联命名空间
	- 不要在头文件中使用 命名空间别名 除非显式标记内部命名空间使用
2、匿名命名空间和静态变量
3、非成员函数、静态成员函数和全局函数
	- 使用静态成员函数或命名空间内的非成员函数, 尽量不要用裸的全局函数. 将一系列函数直接置于命名空间中，
	不要用类的静态方法模拟出命名空间的效果，类的静态方法应当和类的实例或静态数据紧密相关.
4、局部变量 将函数变量尽可能置于最小作用域内, 并在变量声明时进行初始化.
5、静态和全局变量
*/
#ifndef CPP_STYLE_GUIDE_SCOPE_H
#define CPP_STYLE_GUIDE_SCOPE_H

namespace CppStyleGuide {
class Scope
{
public:
	Scope();
	Scope(const Scope&) = delete;
	Scope& operator=(const Scope&) = delete;
};
}	// namespace CppStyleGuide

#endif // CPP_STYLE_GUIDE_SCOPE_H
