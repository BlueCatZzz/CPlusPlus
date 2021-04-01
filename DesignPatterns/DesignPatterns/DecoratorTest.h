#pragma once
#include "Morrigan.h"

void TestDecorator()
{
	std::shared_ptr<OrignalMorrigan> orignal_morrigan = std::make_shared<OrignalMorrigan>();
	std::shared_ptr<SuccubusMorrigan> succubus_morrigan = std::make_shared<SuccubusMorrigan>(orignal_morrigan);
	orignal_morrigan->Display();
	succubus_morrigan->Display();
	std::cin.get();
}