#ifndef REFLANG_SERIALIZER_ENUM_HPP
#define REFLANG_SERIALIZER_ENUM_HPP

#include <iostream>

#include "serializer.hpp"
#include "types.hpp"

namespace reflang
{
	namespace serializer
	{
		void SerializeEnum(std::ostream& o, const Enum& e);
	}
}

#endif //REFLANG_SERIALIZER_ENUM_HPP
