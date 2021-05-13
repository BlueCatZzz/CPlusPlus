#include "headers.h"

std::shared_ptr<Headers> HeadersBuilder::Create()
{
	auto headers = std::make_shared<Headers>();
	if (!headers->Init()) {
		headers.reset();
	}

	return std::move(headers);
}