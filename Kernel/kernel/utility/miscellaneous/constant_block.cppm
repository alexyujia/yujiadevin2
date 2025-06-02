module;

#include "kernel/common.hpp"

export module libra.kernel.utility.miscellaneous.constant_block;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;

export namespace Libra::Kernel {

	#pragma region type

	template <auto t_value> requires
		CategoryConstraint<>
		&& (IsBaseBox<AsUnmakeConstant<decltype(t_value)>>)
	struct ConstantBlock {

	};

	#pragma endregion

}
