module;

#include "kernel/common.hpp"

export module libra.kernel.utility.data.json.value_adapter;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;

export namespace Libra::Kernel::JSON {

	#pragma region type

	// static auto from ( This       & thix, That && that, Option && ...option ) -> Void;
	// static auto to   ( This const & thix, That && that, Option && ...option ) -> Void;
	template <typename TThat>
	struct ValueAdapter;

	#pragma endregion

}
