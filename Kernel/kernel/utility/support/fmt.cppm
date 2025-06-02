module;

#include "kernel/common.hpp"

export module libra.kernel.utility.support.fmt;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;
import libra.kernel.utility.string.string;
import libra.kernel.utility.storage.path;
import libra.kernel.third.fmt;

export {

	#pragma region formatter

	template <>
	struct Twinning::Kernel::Third::fmt::formatter<Twinning::Kernel::CStringView> :
		Twinning::Kernel::Third::fmt::formatter<std::string_view> {
		template <typename Context> requires
			Twinning::Kernel::NoneConstraint
		auto format (
			Twinning::Kernel::CStringView const & value,
			Context &                             context
		) const -> typename Context::iterator {
			return Twinning::Kernel::Third::fmt::formatter<std::string_view>::format(Twinning::Kernel::make_std_string_view(value), context);
		}
	};

	template <>
	struct Twinning::Kernel::Third::fmt::formatter<Twinning::Kernel::VStringView> :
		Twinning::Kernel::Third::fmt::formatter<std::string_view> {
		template <typename Context> requires
			Twinning::Kernel::NoneConstraint
		auto format (
			Twinning::Kernel::VStringView const & value,
			Context &                             context
		) const -> typename Context::iterator {
			return Twinning::Kernel::Third::fmt::formatter<std::string_view>::format(Twinning::Kernel::make_std_string_view(value), context);
		}
	};

	template <>
	struct Twinning::Kernel::Third::fmt::formatter<Twinning::Kernel::String> :
		Twinning::Kernel::Third::fmt::formatter<std::string_view> {
		template <typename Context> requires
			Twinning::Kernel::NoneConstraint
		auto format (
			Twinning::Kernel::String const & value,
			Context &                        context
		) const -> typename Context::iterator {
			return Twinning::Kernel::Third::fmt::formatter<std::string_view>::format(Twinning::Kernel::make_std_string_view(value), context);
		}
	};

	// ----------------

	template <>
	struct Twinning::Kernel::Third::fmt::formatter<Twinning::Kernel::Path> :
		Twinning::Kernel::Third::fmt::formatter<Twinning::Kernel::String> {
		template <typename Context> requires
			Twinning::Kernel::NoneConstraint
		auto format (
			Twinning::Kernel::Path const & value,
			Context &                      context
		) const -> typename Context::iterator {
			return Twinning::Kernel::Third::fmt::formatter<Twinning::Kernel::String>::format(value.to_string(), context);
		}
	};

	// ----------------

	// TODO : specialization format for floater box ?
	template <typename TType> requires
		Twinning::Kernel::AutoConstraint
		&& (Twinning::Kernel::IsBaseBox<TType>)
		&& (Twinning::Kernel::IsDerivedFrom<TType, Twinning::Kernel::BaseBox<typename TType::Value>>) // NOTE : CLANG - avoid bug
	struct Twinning::Kernel::Third::fmt::formatter<TType> :
		Twinning::Kernel::Third::fmt::formatter<typename TType::Value> {
		template <typename Context> requires
			Twinning::Kernel::NoneConstraint
		auto format (
			TType const & value,
			Context &     context
		) const -> typename Context::iterator {
			return Twinning::Kernel::Third::fmt::formatter<typename TType::Value>::format(value.value, context);
		}
	};

	#pragma endregion

}
