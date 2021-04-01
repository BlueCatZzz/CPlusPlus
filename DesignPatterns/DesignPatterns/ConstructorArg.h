#pragma once
#include "ConstructorArgBuilder.h"
class Class {};

template <class T>
class ConstructorArg
{
	template <class BT> friend class ConstructorArgBuilder;
	template <class _Ty> friend class std::_Ref_count_obj;
private:
	ConstructorArg(bool is_ref, T arg) { is_ref_ = is_ref; arg_ = arg; }
	ConstructorArg(bool is_ref, Class type, T arg) { is_ref_ = is_ref; type_ = type; arg_ = arg; }
private:
	bool is_ref_;
	Class type_;
	T arg_;
};
