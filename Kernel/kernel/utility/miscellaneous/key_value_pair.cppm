module;

#include "kernel/common.hpp"

export module libra.kernel.utility.miscellaneous.key_value_pair;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;

export namespace Libra::Kernel {

	#pragma region type

	template <typename TKey, typename TValue> requires
		CategoryConstraint<IsPureInstance<TKey> && IsPureInstance<TValue>>
	struct KeyValuePair {

		using Key = TKey;

		using Value = TValue;

		// ----------------

		Key key{};

		Value value{};

		// ----------------

		implicit constexpr KeyValuePair (
		) = default;

		template <typename KeyObject, typename ValueObject> requires
			CategoryConstraint<IsValid<KeyObject> && IsValid<ValueObject>>
			&& (IsConstructible<Key, KeyObject &&> && IsConstructible<Value, ValueObject &&>)
		explicit constexpr KeyValuePair (
			KeyObject &&   key,
			ValueObject && value
		) :
			key{as_forward<KeyObject>(key)},
			value{as_forward<ValueObject>(value)} {
		}

		// ----------------

		inline friend auto operator == (
			KeyValuePair const & thix,
			KeyValuePair const & that
		) -> bool = default;

	};

	#pragma endregion

}
