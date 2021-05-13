#ifndef COMMON_STRING_UTILS_H
#define COMMON_STRING_UTILS_H

#include <string>

namespace Common
{
	class StringUtils
	{
	public:
		static void StrAddOne(std::string& str);
	private:
		StringUtils() {};
	};
}	// namespace Common
#endif // COMMON_STRING_UTILS_H
