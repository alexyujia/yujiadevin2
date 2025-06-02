module;

#include "kernel/common.hpp"

export module libra.kernel.utility.trait.range;
import libra.kernel.utility.trait.base;
import libra.kernel.utility.trait.category;

export namespace Libra::Kernel::Trait {

	#pragma region concept

	template <typename It>
	concept IsIterator =
		CategoryConstraint<IsPureInstance<It>>
		&& (IsValid<decltype(*declare<It>())>)
		;

	template <typename It>
	concept IsRange =
		CategoryConstraint<IsPureInstance<It>>
		&& (IsIterator<decltype(declare<It>().begin())>)
		&& (IsIterator<decltype(declare<It>().end())>)
		;

	#pragma endregion

}
