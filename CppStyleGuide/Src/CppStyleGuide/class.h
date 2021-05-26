/* ��
1�����캯����ְ��
	- ��Ҫ�ڹ��캯���е����麯��, Ҳ��Ҫ���޷���������ʱ���п���ʧ�ܵĳ�ʼ��.
2����ʽ����ת��
3���ɿ������ͺͿ��ƶ�����
	- 
4���ṹ�� VS. ��
5���̳�
6�����ؼ̳�
7���ӿ�
	- ֻ�д��麯�� (��=0��) �;�̬���� (���������ᵽ����������).
	- û�зǾ�̬���ݳ�Ա.
	- û�ж����κι��캯��. �����, Ҳ���ܴ��в���, ���ұ���Ϊ protected.
	- �������һ������, Ҳֻ�ܴ����������������� Interface Ϊ��׺����̳�.
8����ȡ����
9������˳��
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
