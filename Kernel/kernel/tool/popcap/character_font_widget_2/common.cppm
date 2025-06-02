module;

#include "kernel/common.hpp"

export module libra.kernel.tool.popcap.character_font_widget_2.common;
import libra.kernel.utility;
import libra.kernel.tool.popcap.character_font_widget_2.version;
import libra.kernel.tool.popcap.character_font_widget_2.definition;

export namespace Libra::Kernel::Tool::PopCap::CharacterFontWidget2 {

	template <auto version> requires (check_version(version))
	struct Common {

		using Definition = Definition<version>;

	};

}
