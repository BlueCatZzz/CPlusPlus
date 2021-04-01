#pragma once
#include <string>
namespace data {
	class ClassInfo
	{
	public:
		ClassInfo(std::string school_name);
		~ClassInfo(void);
	private:
		std::string school_name_;
	};
}

