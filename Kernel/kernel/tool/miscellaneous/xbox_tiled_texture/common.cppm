module;

#include "kernel/common.hpp"

export module libra.kernel.tool.miscellaneous.xbox_tiled_texture.common;
import libra.kernel.utility;

export namespace Libra::Kernel::Tool::Miscellaneous::XboxTiledTexture {

	struct Common {

		inline static constexpr auto k_block_width = Size{32_sz};

		inline static constexpr auto k_chunk_width = Size{32_sz};

	};

}
