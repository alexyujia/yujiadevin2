module;

#include "kernel/common.hpp"

export module libra.kernel.tool.popcap.resource_stream_group.common;
import libra.kernel.utility;
import libra.kernel.tool.popcap.resource_stream_group.version;
import libra.kernel.tool.popcap.resource_stream_group.definition;
import libra.kernel.tool.popcap.resource_stream_group.structure;

export namespace Libra::Kernel::Tool::PopCap::ResourceStreamGroup {

	template <auto version> requires (check_version(version, {}))
	struct Common {

		using Definition = Definition<version>;

	};

}
