module;

#include "kernel/common.hpp"

export module libra.kernel.utility.box.enumerated;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box.base;
import libra.kernel.utility.box.number;

export namespace Libra::Kernel {

	#pragma region type

	template <typename TValue> requires
		CategoryConstraint<IsPureInstance<TValue>>
		&& (IsBaseBoxValue<TValue>)
	M_simple_derived_class(EnumeratedBox, IntegerBox<TValue>, IntegerBox);

	// ----------------

	template <typename It>
	concept IsEnumeratedBox = IsTemplateInstanceOfT<It, EnumeratedBox>;

	#pragma endregion

	#pragma region alias

	using Enumerated8 = EnumeratedBox<ZIntegerU8>;

	#pragma endregion

	#pragma region regular type

	M_simple_derived_class(Enumerated, Enumerated8, Enumerated8);

	#pragma endregion

	#pragma region literal

	inline constexpr auto operator ""_e8 (
		ZLiteralInteger value
	) -> Enumerated8 {
		return mbox<Enumerated8>(value);
	}

	// ----------------

	inline constexpr auto operator ""_e (
		ZLiteralInteger value
	) -> Enumerated {
		return mbox<Enumerated>(value);
	}

	#pragma endregion

}
