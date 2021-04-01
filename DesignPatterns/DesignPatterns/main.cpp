#include "Singleton.h"
#include "ConstructorArgBuilder.h"
#include "BridgeTest.h"
#include "DecoratorTest.h"
#include "AdapterTest.h"
#include "file_util.h"

int main()
{

	//TestBridge();
	//TestDecorator();
	//TestAdapter();
	std::vector<FileUtil::FileItem> file_item_vec;
	FileUtil::ReadItems("D:\\GoProject\\1.txt", file_item_vec);
	FileUtil::WriteItems("D:\\GoProject\\1.txt", file_item_vec);
	return 0;
}