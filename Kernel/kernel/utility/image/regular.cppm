module;

#include "kernel/common.hpp"

export module libra.kernel.utility.image.regular;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;
import libra.kernel.utility.image.size;
import libra.kernel.utility.image.color;
import libra.kernel.utility.image.pixel;
import libra.kernel.utility.image.image_view;
import libra.kernel.utility.image.image;

export namespace Libra::Kernel::Image {

	#pragma region alias

	using Color = BasicColor<ZIntegerU8>;

	// ----------------

	using Pixel = BasicPixelRGBA<Color>;

	// ----------------

	using VImageView = VBasicImageView<Pixel>;

	using CImageView = CBasicImageView<Pixel>;

	using Image = BasicImage<Pixel>;

	#pragma endregion

	#pragma region constant

	inline constexpr auto k_color_minimum = Color{0x00};

	inline constexpr auto k_color_maximum = Color{0xFF};

	#pragma endregion

}
