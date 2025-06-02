module;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"

#include "third/mscharconv/include/msstl/charconv.hpp"

#pragma clang diagnostic pop

export module libra.kernel.third.mscharconv;

export namespace Libra::Kernel::Third::mscharconv {

	using ::msstl::chars_format;

	using ::msstl::from_chars_result;

	using ::msstl::to_chars;

	using ::msstl::from_chars;

}
