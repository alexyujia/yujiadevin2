module;

#include "kernel/common.hpp"

export module libra.kernel.utility.null;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;

export namespace Libra::Kernel {

	#pragma region type

	class Null final {

	public:

		#pragma region operator

		inline friend constexpr auto operator == (
			Null const & thix,
			Null const & that
		) -> bool = default;

		#pragma endregion

	};

	#pragma endregion

	#pragma region constant

	inline constexpr auto k_null = Null{};

	#pragma endregion

}
