module;

#include "kernel/common.hpp"

export module libra.kernel.tool.data.hash.md5.hash;
import libra.kernel.utility;
import libra.kernel.tool.data.hash.md5.common;
import libra.kernel.third.md5;

export namespace Libra::Kernel::Tool::Data::Hash::MD5 {

	struct Hash :
		Common {

		using Common = Common;

		// ----------------

		inline static auto process_whole (
			CByteListView const & data,
			ByteArray &           value
		) -> Void {
			auto generator = Third::md5::MD5{std::span{cast_pointer<Third::md5::byte>(data.begin()).value, data.size().value}};
			value.assign(CByteListView{cast_pointer<Byte>(make_pointer(generator.getDigest())), 16_sz});
			return;
		}

		// ----------------

		inline static auto process (
			CByteListView const & data,
			ByteArray &           value
		) -> Void {
			restruct(value);
			return process_whole(data, value);
		}

	};

}
