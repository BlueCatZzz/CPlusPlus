/*	头文件编码规范
1、Self-contained 头文件
2、#define 保护	<PROJECT>_<PATH>_<FILE>_H_
3、前置声明	尽可能地避免使用前置声明。使用 #include 包含需要的头文件即可。
	- 尽量避免前置声明那些定义在其他项目中的实体.
	- 函数：总是使用 #include.
	- 类模板：优先使用 #include.
4、内联函数 只有当函数只有 10 行甚至更少时才将其定义为内联函数.
5、#include 的路径及顺序
	- dir2/foo2.h (优先位置, 详情如下)
	- 操作系统api头文件
	- C 系统文件
	- C++ 系统文件
	- 其他库的 .h 文件
	- 本项目内 .h 文件
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
