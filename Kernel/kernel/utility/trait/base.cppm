module;

#include "kernel/common.hpp"

export module libra.kernel.utility.trait.base;
import libra.kernel.utility.builtin;
import libra.kernel.utility.exception.exception;
import libra.kernel.utility.exception.utility;

export namespace Libra::Kernel::Trait {

	#pragma region constraint comment

	inline constexpr auto NoneConstraint = true;

	inline constexpr auto AutoConstraint = true;

	inline constexpr auto CustomConstraint = true;

	// ----------------

	template <auto condition = true>
	concept CategoryConstraint =
		CustomConstraint
		&& (condition)
		;

	#pragma endregion

	#pragma region utility

	template <typename> requires
		NoneConstraint
	inline constexpr auto k_static_assert_fail = bool{false};

	// ----------------

	template <typename It> requires
		NoneConstraint
	inline constexpr auto declare (
	) -> It {
		throw ImpossibleException{};
	}

	#pragma endregion

}
