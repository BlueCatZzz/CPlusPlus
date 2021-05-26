#include "class.h"

namespace CppStyleGuide {
std::unique_ptr<Class> ClassBuilder::Create()
{
	std::unique_ptr<Class> instance(new Class(3));
	if (!instance->Init()) {
		instance.reset();
	}
	
	return std::move(instance);
}
}	// namespace CppStyleGuide