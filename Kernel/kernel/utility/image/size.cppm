module;

#include "kernel/common.hpp"

export module libra.kernel.utility.image.size;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;
import libra.kernel.utility.miscellaneous.dimension;

export namespace Libra::Kernel::Image {

	#pragma region type

	using ImageSize = Size2<Size>;

	using ImagePosition = Position2<Size>;

	#pragma endregion

	#pragma region constant

	inline constexpr auto k_begin_image_position = ImagePosition{k_begin_index, k_begin_index};

	inline constexpr auto k_none_image_size = ImageSize{k_none_size, k_none_size};

	#pragma endregion

}
