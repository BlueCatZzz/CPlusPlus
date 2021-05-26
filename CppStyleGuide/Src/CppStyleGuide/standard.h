/*******************************************************************************
* Copyright (c) 2021
* All rights reserved.
*
* 文件名称：standard.h
* 文件标识：
* 摘　　要：代码规范
* 作　　者：陈航
* 完成日期：2021年05月26日
*
* 说明：代码规范的示例文件
******************************************************************************/
#ifndef CPP_STYLE_GUIDE_STANDARD_H
#define CPP_STYLE_GUIDE_STANDARD_H

//头文件包换规范
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <set>
#include "Common/string_utils.h"
#include "class.h"
#include "headers.h"

namespace CppStyleGuide {
namespace StandardUtil {
int GetLength();
}	// namespace StandardUtil
class Standard {
public:
	Standard();
	virtual ~Standard() {};
	explicit Standard(int height);
	inline int GetHeight() const { return height_; }
	bool Init() const;
	//单例模式
	static Standard* GetInstance() { static Standard instance; return &instance; };
private:
	int height_;
};

//建造者模式
class StandardBuilder {
public:
	std::unique_ptr<Standard> Create() const;
};
}	// namespace CppStyleGuide

#endif // CPP_STYLE_GUIDE_STANDARD_H
