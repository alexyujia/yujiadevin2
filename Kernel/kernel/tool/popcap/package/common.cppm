module;

#include "kernel/common.hpp"

export module libra.kernel.tool.popcap.package.common;
import libra.kernel.utility;
import libra.kernel.tool.popcap.package.version;
import libra.kernel.tool.popcap.package.definition;
import libra.kernel.tool.popcap.package.structure;

export namespace Libra::Kernel::Tool::PopCap::Package {

	template <auto version> requires (check_version(version, {}, {}))
	struct Common {

		using Definition = Definition<version>;

	};

}
