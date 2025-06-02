module;

#include "kernel/common.hpp"

export module libra.kernel.tool.marmalade.dzip.common;
import libra.kernel.utility;
import libra.kernel.tool.marmalade.dzip.version;
import libra.kernel.tool.marmalade.dzip.definition;
import libra.kernel.tool.marmalade.dzip.structure;

export namespace Libra::Kernel::Tool::Marmalade::DZip {

	template <auto version> requires (check_version(version, {}))
	struct Common {

		using Definition = Definition<version>;

	};

}
