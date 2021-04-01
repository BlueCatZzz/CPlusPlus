#pragma once
#include "adapter.h"

void TestAdapter()
{
	ClassAdapter class_adapter;
	class_adapter.Request();

	auto adaptee_ptr = std::make_shared<Adaptee>();
	ObjectAdapter object_adapter(adaptee_ptr);
	object_adapter.Request();

	std::cin.get();
}