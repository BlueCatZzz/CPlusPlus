/*函数
1、参数顺序 输入参数在先, 后跟输出参数.
2、编写简短函数	如果函数超过 40 行, 可以思索一下
3、引用参数
4、缺省参数
5、函数返回类型后置语法
*/
#ifndef CPP_STYLE_GUIDE_FUNCTION_H
#define CPP_STYLE_GUIDE_FUNCTION_H

#include <string>

#define __IN
#define __OUT

namespace CppStyleGuide {
class Function
{
	bool GetError(__IN const std::string&, __OUT std::string&) { return true; }
};
}	// namespace CppStyleGuide

#endif // CPP_STYLE_GUIDE_FUNCTION_H
