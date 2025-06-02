module;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"

#include "third/md5/md5.h"

#pragma clang diagnostic pop

export module libra.kernel.third.md5;

export namespace Libra::Kernel::Third::md5 {

	using ::byte;

	using ::MD5;

}
