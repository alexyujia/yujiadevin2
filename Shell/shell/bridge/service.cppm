module;

#include "shell/common.hpp"

export module libra.shell.bridge.service;
import libra.shell.bridge.data;

export namespace Libra::Shell::Bridge {

	#pragma region type

	struct Service {

		Executor * executor{nullptr};

		std::add_pointer_t<void  ()> initialize{nullptr};

		std::add_pointer_t<void  ()> finalize{nullptr};

	};

	#pragma endregion

}
