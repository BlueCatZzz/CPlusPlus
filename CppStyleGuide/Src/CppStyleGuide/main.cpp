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

//��������ʼ�� ����С�ķ�Χ��

//��ֹ���徲̬�������ڷ�POD������
//��ֹʹ�ú��и����õĺ�����ʼ��PODȫ�ֱ�����
//��Ϊ����뵥Ԫ�еľ�̬����ִ��ʱ�Ĺ��������˳����δ��ȷ�ģ��⽫���´���Ĳ�����ֲ��