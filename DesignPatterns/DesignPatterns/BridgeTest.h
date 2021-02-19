#pragma once
#include "Bag.h"
#include "IColor.h"

void TestBridge()
{
	std::shared_ptr<IColor> red_color_ptr = std::make_shared<RedColor>();
	std::shared_ptr<HandBag> hand_bag_ptr = std::make_shared<HandBag>();
	hand_bag_ptr->SetColor(red_color_ptr);
	hand_bag_ptr->ShowColor();
	hand_bag_ptr->GetName();
	std::cin.get();
}