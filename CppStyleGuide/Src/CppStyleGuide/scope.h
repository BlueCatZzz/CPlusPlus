/* ������
1�������ռ�
	- ��ֹ�����������ռ�
	- ��Ҫ��ͷ�ļ���ʹ�� �����ռ���� ������ʽ����ڲ������ռ�ʹ��
2�����������ռ�;�̬����
3���ǳ�Ա��������̬��Ա������ȫ�ֺ���
	- ʹ�þ�̬��Ա�����������ռ��ڵķǳ�Ա����, ������Ҫ�����ȫ�ֺ���. ��һϵ�к���ֱ�����������ռ��У�
	��Ҫ����ľ�̬����ģ��������ռ��Ч������ľ�̬����Ӧ�������ʵ����̬���ݽ������.
4���ֲ����� ����������������������С��������, ���ڱ�������ʱ���г�ʼ��.
5����̬��ȫ�ֱ���
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
