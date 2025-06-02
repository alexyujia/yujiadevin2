module;

#include "kernel/common.hpp"

export module libra.kernel.tool.data.compression.deflate.common;
import libra.kernel.utility;

export namespace Libra::Kernel::Tool::Data::Compression::Deflate {

	M_enumeration(
		M_wrap(Strategy),
		M_wrap(
			default_mode,
			filtered,
			huffman_only,
			rle,
			fixed,
		),
	);

	M_enumeration(
		M_wrap(Wrapper),
		M_wrap(
			none,
			zlib,
			gzip,
		),
	);

	// ----------------

	struct Common {

	};

}
