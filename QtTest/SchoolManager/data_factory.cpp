#include "data_factory.h"

namespace data {
	DataFactory::DataFactory(QObject *parent)
		: QObject(parent)
	{
	}

	DataFactory::~DataFactory()
	{
	}

	DataFactory& DataFactory::Instance()
	{
		static DataFactory data_factory;
		return data_factory;
	}
}
