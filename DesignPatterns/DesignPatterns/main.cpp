#include "Singleton.h"
#include "ConstructorArgBuilder.h"
#include "BridgeTest.h"
#include "DecoratorTest.h"
#include "AdapterTest.h"

int main()
{
	TestBridge();
	TestDecorator();
	TestAdapter();
	return 0;
}