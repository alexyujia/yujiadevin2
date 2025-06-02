module;

#include "kernel/common.hpp"

export module libra.kernel.utility.miscellaneous.string_block;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;
import libra.kernel.utility.string.string;

export namespace Libra::Kernel {

	#pragma region type

	template <typename TLength> requires
		CategoryConstraint<IsPure<TLength>>
		&& (IsVoid<TLength> || IsIntegerBox<TLength>)
	struct StringBlock {

		using Length = TLength;

		// ----------------

		String value{};

	};

	#pragma endregion

	#pragma region alias

	using StringBlockZeroed = StringBlock<Void>;

	using StringBlock8 = StringBlock<IntegerU8>;

	using StringBlock16 = StringBlock<IntegerU16>;

	using StringBlock32 = StringBlock<IntegerU32>;

	#pragma endregion

}
