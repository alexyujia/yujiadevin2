module;

#include "kernel/common.hpp"

export module libra.kernel.interface.data;
import libra.kernel.utility;

export namespace Libra::Kernel::Interface {

	#pragma region type

	struct Message {

		std::uint8_t * data{nullptr};

		std::size_t size{0};

	};

	struct Executor {

		std::add_pointer_t<void  (Executor *, Executor *, Message *, Message *, Message *)> invoke{nullptr};

		std::add_pointer_t<void  (Executor *, Executor *, Message *, Message *, Message *)> clear{nullptr};

	};

	#pragma endregion

}
