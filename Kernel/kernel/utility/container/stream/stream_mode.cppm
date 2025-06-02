module;

#include "kernel/common.hpp"

export module libra.kernel.utility.container.stream.stream_mode;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;
import libra.kernel.utility.container.list.list_view;

export namespace Libra::Kernel {

	#pragma region type

	M_enumeration(
		M_wrap(StreamMode),
		M_wrap(
			io,
			i,
			o,
		),
	);

	#pragma endregion

}
