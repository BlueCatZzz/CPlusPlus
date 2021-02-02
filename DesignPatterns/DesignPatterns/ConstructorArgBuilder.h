#pragma once
#include "ConstructorArg.h"

template <class BT>
class ConstructorArgBuilder
{
	ConstructorArg<BT> test_;
public:
	static std::shared_ptr<ConstructorArg<BT>> Build(bool is_ref, Class type, BT arg) { 
		if (is_ref) {
			if (std::is_same<std::string, BT>::value) {
				return std::make_shared<ConstructorArg<BT>>(is_ref, type, arg);
			}
			return nullptr;
		} else {
			return std::make_shared<ConstructorArg<BT>>(is_ref, type, arg);
		}
		return nullptr;
	}

	static std::shared_ptr<ConstructorArg<BT>> Build(bool is_ref, BT arg) {
		if (is_ref && std::is_same<std::string, BT>::value) {
			return std::make_shared<ConstructorArg<BT>>(is_ref, arg);
		}

		return nullptr;
	}
};