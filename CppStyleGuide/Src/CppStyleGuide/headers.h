/*	ͷ�ļ�����淶
1��Self-contained ͷ�ļ�
2��#define ����	<PROJECT>_<PATH>_<FILE>_H_
3��ǰ������	�����ܵر���ʹ��ǰ��������ʹ�� #include ������Ҫ��ͷ�ļ����ɡ�
	- ��������ǰ��������Щ������������Ŀ�е�ʵ��.
	- ����������ʹ�� #include.
	- ��ģ�壺����ʹ�� #include.
4���������� ֻ�е�����ֻ�� 10 ����������ʱ�Ž��䶨��Ϊ��������.
5��#include ��·����˳��
	- dir2/foo2.h (����λ��, ��������)
	- ����ϵͳapiͷ�ļ�
	- C ϵͳ�ļ�
	- C++ ϵͳ�ļ�
	- ������� .h �ļ�
	- ����Ŀ�� .h �ļ�
*/
#ifndef CPP_STYLE_GUIDE_HEADERS_H
#define CPP_STYLE_GUIDE_HEADERS_H

#include <windows.h>
#include <iostream>
#include <thread>

class HeadersBuilder;
class Headers
{
public:
	Headers();
	Headers(const Headers&) = delete;
	Headers& operator=(const Headers&) = delete;
	virtual ~Headers();
	bool Init() { return true; }
	inline void SetMeber1(int member1) { member1_ = member1; }
	inline int GetMember1() const { return member1_; };
	inline int GetConstMember1() { return member1_; }
	virtual void Member1Add();
	virtual void Member1Sub();
protected:
	int member1_;
};

class HeadersBuilder
{
public:
	std::shared_ptr<Headers> Create();
};

class IsHeaders : public Headers
{
public:
	explicit IsHeaders();
	IsHeaders(const Headers&) = delete;
	IsHeaders& operator=(const Headers&) = delete;
	virtual ~IsHeaders() final;
	virtual void Member1Add() override;
	virtual void Member1Sub() final;
};

class HasHeaders
{
private:
	Headers* headers_;
};
#endif // CPP_STYLE_GUIDE_HEADERS_H
