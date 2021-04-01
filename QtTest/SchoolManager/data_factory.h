#pragma once
#include <map>
#include <QObject>
namespace data {
	class SchoolInfo;
	class DataFactory : public QObject
	{
		Q_OBJECT

	private:
		DataFactory(QObject *parent = nullptr);
		~DataFactory();
	public:
		static DataFactory& Instance();
	private:
		std::map<std::string, SchoolInfo*> school_info_map_;
	};
}

typedef data::DataFactory theDataFactory;
