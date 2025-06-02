module;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"

#include "third/lzma/LzmaLib.h"

#pragma clang diagnostic pop

export module libra.kernel.third.lzma;

export namespace Libra::Kernel::Third::lzma {

	using $Byte = ::Byte;

	inline constexpr auto $LzmaCompress = ::LzmaCompress;

	inline constexpr auto $LzmaUncompress = ::LzmaUncompress;

	inline constexpr auto $SZ_OK = SZ_OK;

	inline constexpr auto $LZMA_PROPS_SIZE = LZMA_PROPS_SIZE;

}
