module;

#include "kernel/common.hpp"

export module libra.kernel.utility.box.null_pointer;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box.base;
import libra.kernel.utility.box.pointer;

export namespace Libra::Kernel {

	#pragma region type

	class NullPointerBox final {

	public:

		#pragma region operator

		template <typename It> requires
			CategoryConstraint<IsPureInstance<It>>
			&& (IsPointerBox<It>)
		implicit constexpr operator It () const {
			return It{static_cast<ZPointer<typename It::Target>>(nullptr)};
		}

		#pragma endregion

	};

	#pragma endregion

	#pragma region operator

	inline constexpr auto operator == (
		NullPointerBox const & thix,
		NullPointerBox const & that
	) -> bool {
		return true;
	}

	// ----------------

	template <typename It> requires
		CategoryConstraint<IsPureInstance<It>>
		&& (IsPointerBox<It>)
	inline constexpr auto operator == (
		It const &             thix,
		NullPointerBox const & that
	) -> bool {
		return thix.value == nullptr;
	}

	#pragma endregion

	#pragma region alias

	using NullPointer = NullPointerBox;

	#pragma endregion

	#pragma region constant

	inline constexpr auto k_null_pointer = NullPointer{};

	#pragma endregion

}
