module;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"

#include "third/Rijndael/Rijndael.h"

#pragma clang diagnostic pop

export module libra.kernel.third.Rijndael;

export namespace Libra::Kernel::Third::Rijndael {

	using ::CRijndael;

}
