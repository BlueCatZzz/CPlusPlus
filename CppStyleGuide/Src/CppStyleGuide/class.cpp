#include "class.h"

namespace CppStyleGuide {
std::shared_ptr<Class> ClassBuilder::Create()
{
	std::shared_ptr<Class> instance = std::make_shared<Class>(3);
	if (!instance->Init()) {
		instance.reset();
	}
	return std::move(instance);
}
}	// namespace CppStyleGuide