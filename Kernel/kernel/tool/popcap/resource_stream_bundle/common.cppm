module;

#include "kernel/common.hpp"

export module libra.kernel.tool.popcap.resource_stream_bundle.common;
import libra.kernel.utility;
import libra.kernel.tool.popcap.resource_stream_bundle.version;
import libra.kernel.tool.popcap.resource_stream_bundle.definition;
import libra.kernel.tool.popcap.resource_stream_bundle.manifest;
import libra.kernel.tool.popcap.resource_stream_bundle.structure;
import libra.kernel.tool.popcap.resource_stream_bundle.shared;

export namespace Libra::Kernel::Tool::PopCap::ResourceStreamBundle {

	template <auto version> requires (check_version(version, {}, {}))
	struct Common {

		using Definition = Definition<version>;

		using Manifest = Manifest<version>;

		// ----------------

		inline static auto const k_suffix_of_composite_shell_upper = CStringView{"_COMPOSITESHELL"_sv};

		inline static auto const k_suffix_of_composite_shell = CStringView{"_CompositeShell"_sv};

		inline static auto const k_suffix_of_automation_pool = CStringView{"_AutoPool"_sv};

	};

}
