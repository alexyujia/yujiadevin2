module;

#include "kernel/common.hpp"

export module libra.kernel.utility.script.java_script.value_adapter;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;

export namespace Libra::Kernel::JavaScript {

	#pragma region type

	// static auto from ( This & thix, That && that, Option && ...option ) -> Void;
	// static auto to   ( This & thix, That && that, Option && ...option ) -> Void;
	template <typename TThat>
	struct ValueAdapter;

	#pragma endregion

}
