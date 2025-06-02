module;

#include "kernel/common.hpp"

export module libra.kernel.utility.image.pixel;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;
import libra.kernel.utility.image.color;

export namespace Libra::Kernel::Image {

	#pragma region type

	template <typename TColor> requires
		CategoryConstraint<IsPureInstance<TColor>>
	struct BasicPixelRGBA {

		using Color = TColor;

		// ----------------

		Color red{};

		Color green{};

		Color blue{};

		Color alpha{};

		// ----------------

		inline friend constexpr auto operator == (
			BasicPixelRGBA const & thix,
			BasicPixelRGBA const & that
		) -> bool = default;

	};

	#pragma endregion

}
