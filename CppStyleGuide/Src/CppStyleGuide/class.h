/* ��
1�����캯����ְ��
	- ��Ҫ�ڹ��캯���е����麯��, Ҳ��Ҫ���޷���������ʱ���п���ʧ�ܵĳ�ʼ��.
2����ʽ����ת��
3���ɿ������ͺͿ��ƶ�����
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
