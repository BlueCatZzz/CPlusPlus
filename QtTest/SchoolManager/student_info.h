#pragma once
#include <string>
namespace data {
	class StudentInfo
	{
	public:
		StudentInfo(std::string school_name);
		~StudentInfo(void);
	private:
		std::string school_name_;
	};
}

