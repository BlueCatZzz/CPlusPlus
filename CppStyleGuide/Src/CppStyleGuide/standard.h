/*******************************************************************************
* Copyright (c) 2021
* All rights reserved.
*
* �ļ����ƣ�standard.h
* �ļ���ʶ��
* ժ����Ҫ������淶
* �������ߣ��º�
* ������ڣ�2021��05��26��
*
* ˵��������淶��ʾ���ļ�
******************************************************************************/
#ifndef CPP_STYLE_GUIDE_STANDARD_H
#define CPP_STYLE_GUIDE_STANDARD_H

//ͷ�ļ������淶
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
	//����ģʽ
	static Standard* GetInstance() { static Standard instance; return &instance; };
private:
	int height_;
};

//������ģʽ
class StandardBuilder {
public:
	std::unique_ptr<Standard> Create() const;
};
}	// namespace CppStyleGuide

#endif // CPP_STYLE_GUIDE_STANDARD_H
