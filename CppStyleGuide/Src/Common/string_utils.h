#ifndef COMMON_STRING_UTILS_H
#define COMMON_STRING_UTILS_H

#include <string>

namespace Common {
namespace StringUtils {

void StrAddOne(std::string& str);

static void StrTest1(std::string& str);

constexpr int StrStr();

}	// namespace StringUtils
}	// namespace Common
#endif // COMMON_STRING_UTILS_H
