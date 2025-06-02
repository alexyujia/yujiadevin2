module;

#include "kernel/common.hpp"

export module libra.kernel.tool.popcap.crypt_data.version;
import libra.kernel.utility;

export namespace Libra::Kernel::Tool::PopCap::CryptData {

	M_record_of_map(
		M_wrap(Version),
		M_wrap(
		),
	);

	using VersionPackage = ValuePackage<
		Version{}
	>;

	// ----------------

	inline constexpr auto check_version (
		Version const & it
	) -> ZBoolean {
		auto result = true;
		result &= VersionPackage::has(it);
		return result;
	}

}
