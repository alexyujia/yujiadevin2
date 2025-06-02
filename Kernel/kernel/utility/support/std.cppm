module;

#include "kernel/common.hpp"

export module libra.kernel.utility.support.std;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;
import libra.kernel.utility.string.string;

export {

	#pragma region hash

	template <>
	struct std::hash<Libra::Kernel::CStringView> {
		auto operator () (
			Libra::Kernel::CStringView const & it
		) const noexcept -> std::size_t {
			return std::hash<std::string_view>{}(Libra::Kernel::make_std_string_view(it));
		}
	};

	template <>
	struct std::hash<Libra::Kernel::VStringView> {
		auto operator () (
			Libra::Kernel::VStringView const & it
		) const noexcept -> std::size_t {
			return std::hash<std::string_view>{}(Libra::Kernel::make_std_string_view(it));
		}
	};

	template <>
	struct std::hash<Libra::Kernel::String> {
		auto operator () (
			Libra::Kernel::String const & it
		) const noexcept -> std::size_t {
			return std::hash<std::string_view>{}(Libra::Kernel::make_std_string_view(it));
		}
	};

	#pragma endregion

}
