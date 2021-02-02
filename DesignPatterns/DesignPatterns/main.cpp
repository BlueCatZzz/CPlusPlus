#include "Singleton.h"
#include "ConstructorArgBuilder.h"

int main()
{
	Class type;
	auto ptr = ConstructorArgBuilder<std::string>::Build(true, type, std::string());
	return 0;
}