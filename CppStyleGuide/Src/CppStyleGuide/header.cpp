#include "headers.h"

Headers::Headers()
{

}

Headers::~Headers()
{

}

void Headers::Member1Add()
{
	member1_ += 2;
}

void Headers::Member1Sub()
{
	member1_ -= 2;
}

std::shared_ptr<Headers> HeadersBuilder::Create()
{
	auto headers = std::make_shared<Headers>();
	if (!headers->Init()) {
		headers.reset();
	}

	return std::move(headers);
}

IsHeaders::IsHeaders()
{

}

IsHeaders::~IsHeaders()
{

}

void IsHeaders::Member1Add()
{
	member1_ += 4;
}

void IsHeaders::Member1Sub()
{
	member1_ -= 4;
}