module;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"

#include "third/tinyxml2/tinyxml2.h"

#pragma clang diagnostic pop

export module libra.kernel.third.tinyxml2;

export namespace Libra::Kernel::Third::tinyxml2 {

	using ::tinyxml2::XMLNode;

	using ::tinyxml2::XMLDocument;

	using ::tinyxml2::XMLPrinter;

}
