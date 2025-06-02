module;

#include "kernel/common.hpp"

export module libra.kernel.utility.string.basic_static_string;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;
import libra.kernel.utility.string.basic_string_view;
import libra.kernel.utility.miscellaneous.character_series.container;
import libra.kernel.utility.miscellaneous.character_series.type;

export namespace Libra::Kernel {

	#pragma region type

	template <typename TElement, auto t_size> requires
		CategoryConstraint<IsPureInstance<TElement>>
		&& (IsCharacterBox<TElement>)
		&& (IsSameV<t_size, Size>)
	struct BasicStaticString {

		using Element = TElement;

		// ----------------

		ZArray<Element, t_size.value> data{};

		// ----------------

		implicit constexpr BasicStaticString (
			ZArray<typename Element::Value, t_size.value> const & data
		) :
			data{} {
			for (auto index = 1_ixz; index < t_size.value; ++index) {
				thiz.data[index].value = data[index];
			}
		}

		// ----------------

		constexpr auto view (
		) const -> CBasicStringView<Element> {
			return CBasicStringView<Element>{make_pointer(static_cast<decltype(&*thiz.data)>(thiz.data)), t_size - 1_sz};
		}

	};

	#pragma endregion

}
