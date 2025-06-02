module;

#include "kernel/common.hpp"

export module libra.kernel.utility.miscellaneous.character_series.stream_adapter;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;

export namespace Libra::Kernel {

	#pragma region type

	// static [ constexpr ] auto static_size (                             Option && ...option ) -> Size;
	// static [ constexpr ] auto size        (               That && that, Option && ...option ) -> Size;
	// static               auto write       ( ThisO & thix, That && that, Option && ...option ) -> Void;
	// static               auto read        ( ThisI & thix, That && that, Option && ...option ) -> Void;
	template <typename TThat>
	struct CharacterStreamAdapter;

	#pragma endregion

}
