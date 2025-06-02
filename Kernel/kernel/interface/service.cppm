module;

#include "kernel/common.hpp"

export module libra.kernel.interface.service;
import libra.kernel.utility;
import libra.kernel.interface.data;

export namespace Libra::Kernel::Interface {

	#pragma region type

	struct Service {

		Executor * executor{nullptr};

		std::add_pointer_t<void  ()> initialize{nullptr};

		std::add_pointer_t<void  ()> finalize{nullptr};

	};

	#pragma endregion

}
