#pragma once
#include <string>
namespace data {
	class SchoolInfo
	{
	public:
		SchoolInfo(std::string school_name);
		~SchoolInfo(void);
	private:
		std::string school_name_;
	};
}

