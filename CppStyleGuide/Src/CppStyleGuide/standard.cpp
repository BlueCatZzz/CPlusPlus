#include "standard.h"

namespace CppStyleGuide {
namespace StandardUtil {
namespace{
int g_length = 0;	//ÉùÃ÷¼´³õÊ¼»¯
}

int GetLength()
{
	return g_length;
}
}	// namespace StandardUtil

Standard::Standard()
	: height_(0)
{}

Standard::Standard(int height)
	: height_(height)
{}

bool Standard::Init() const
{
	return true;
}

std::unique_ptr<Standard> StandardBuilder::Create() const
{
	std::unique_ptr<Standard> instance(new Standard());
	if (!instance->Init())
		instance.reset();
	return std::move(instance);
}

}	// namespace CppStyleGuide