//

#if defined M_vld
#include "vld.h"
#endif

#include "kernel/interface/interface.hpp"
#include "shell/common.hpp"

import libra.shell.utility.exception;
import libra.shell.utility.library;
import libra.shell.utility.interaction;
import libra.shell.utility.miscellaneous;
import libra.shell.bridge.library;
import libra.shell.bridge.launcher;
import libra.shell.main_console_bridge_client;

#pragma region main

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-prototypes"

M_declare_native_main_function {
	#if defined M_build_release
	try
	#endif
	{
		auto args = Libra::Shell::parse_native_main_function_argument(argc, argv);
		assert_test(args.size() >= 3);
		auto kernel = args[1];
		auto script = args[2];
		auto argument = std::vector<std::string>{args.begin() + 3, args.end()};
		auto library = Libra::Shell::Bridge::Library{&Libra::Kernel::Interface::service};
		auto client = Libra::Shell::MainConsoleBridgeClient{};
		auto result = Libra::Shell::Bridge::Launcher::launch(client, library, script, argument);
		Libra::Shell::Interaction::output_text("SUCCEEDED");
		Libra::Shell::Interaction::output_text("\n");
		for (auto & result_item : result) {
			Libra::Shell::Interaction::output_text(result_item);
			Libra::Shell::Interaction::output_text("\n");
		}
		return 0;
	}
	#if defined M_build_release
	catch (...) {
		auto exception = Libra::Shell::parse_current_exception();
		Libra::Shell::Interaction::output_text("FAILED");
		Libra::Shell::Interaction::output_text("\n");
		Libra::Shell::Interaction::output_text(exception);
		Libra::Shell::Interaction::output_text("\n");
		return 1;
	}
	#endif
}

#pragma clang diagnostic pop

#pragma endregion
