/*����
1������˳�� �����������, ����������.
2����д��̺���	����������� 40 ��, ����˼��һ��
3�����ò���
4��ȱʡ����
5�������������ͺ����﷨
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
