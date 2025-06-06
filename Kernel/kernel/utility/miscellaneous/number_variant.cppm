module;

#include "kernel/common.hpp"

export module libra.kernel.utility.miscellaneous.number_variant;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;
import libra.kernel.utility.container.variant.variant;
import libra.kernel.utility.container.variant.enumerable_variant;

export namespace Libra::Kernel {

	#pragma region sub type

	M_enumeration(
		M_wrap(NumberVariantType),
		M_wrap(
			integer,
			floater,
		),
	);

	#pragma endregion

	#pragma region type

	class NumberVariant :
		public EnumerableVariant<NumberVariantType, Integer, Floater> {

	public:

		#pragma region structor

		constexpr ~NumberVariant (
		) = default;

		// ----------------

		constexpr NumberVariant (
		) = default;

		constexpr NumberVariant (
			NumberVariant const & that
		) = default;

		constexpr NumberVariant (
			NumberVariant && that
		) = default;

		// ----------------

		using EnumerableVariant::EnumerableVariant;

		#pragma endregion

		#pragma region operator

		constexpr auto operator = (
			NumberVariant const & that
		) -> NumberVariant & = default;

		constexpr auto operator = (
			NumberVariant && that
		) -> NumberVariant & = default;

		#pragma endregion

		#pragma region value

		constexpr auto is_integer (
		) const -> Boolean {
			return thiz.is<Integer>();
		}

		constexpr auto is_floater (
		) const -> Boolean {
			return thiz.is<Floater>();
		}

		// ----------------

		template <typename ... Argument> requires
			CategoryConstraint<IsValid<Argument ...>>
		constexpr auto set_integer (
			Argument && ... argument
		) -> Integer & {
			return thiz.set<Integer>(as_forward<Argument>(argument) ...);
		}

		template <typename ... Argument> requires
			CategoryConstraint<IsValid<Argument ...>>
		constexpr auto set_floater (
			Argument && ... argument
		) -> Floater & {
			return thiz.set<Floater>(as_forward<Argument>(argument) ...);
		}

		// ----------------

		constexpr auto get_integer (
		) -> Integer & {
			return thiz.get<Integer>();
		}

		constexpr auto get_floater (
		) -> Floater & {
			return thiz.get<Floater>();
		}

		// ----------------

		constexpr auto get_integer (
		) const -> Integer const & {
			return thiz.get<Integer>();
		}

		constexpr auto get_floater (
		) const -> Floater const & {
			return thiz.get<Floater>();
		}

		#pragma endregion

	};

	#pragma endregion

}
