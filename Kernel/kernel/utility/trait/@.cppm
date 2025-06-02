module;

#include "kernel/common.hpp"

export module libra.kernel.utility.trait;
export import libra.kernel.utility.trait.base;
export import libra.kernel.utility.trait.category;
export import libra.kernel.utility.trait.template_instance;
export import libra.kernel.utility.trait.object;
export import libra.kernel.utility.trait.builtin;
export import libra.kernel.utility.trait.package.type_package;
export import libra.kernel.utility.trait.package.value_package;
export import libra.kernel.utility.trait.reflection.string;
export import libra.kernel.utility.trait.reflection.field;
export import libra.kernel.utility.trait.generalization;
export import libra.kernel.utility.trait.range;
export import libra.kernel.utility.trait.callable;

// NOTE : USING

export namespace Libra::Kernel {
	using namespace Trait;
}
