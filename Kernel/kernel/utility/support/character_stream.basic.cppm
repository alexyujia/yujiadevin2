module;

#include "kernel/common.hpp"

export module libra.kernel.utility.support.character_stream.basic;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;
import libra.kernel.utility.container.stream.stream_view;
import libra.kernel.utility.miscellaneous.character_series.container;
import libra.kernel.utility.miscellaneous.character_series.stream;
import libra.kernel.utility.miscellaneous.character_series.stream_adapter;
import libra.kernel.utility.string.string;

export namespace Libra::Kernel {

	#pragma region character

	template <>
	struct CharacterStreamAdapter<Character> {

		using ThisI = ICharacterStreamView;

		using ThisO = OCharacterStreamView;

		using That = Character;

		// ----------------

		inline static auto write (
			ThisO &      thix,
			That const & that
		) -> Void {
			up_cast<OStreamView<Character, BasicCharacterListView>>(thix).write(that);
			return;
		}

		inline static auto read (
			ThisI & thix,
			That &  that
		) -> Void {
			up_cast<IStreamView<Character, BasicCharacterListView>>(thix).read(that);
			return;
		}

	};

	#pragma endregion

	#pragma region string

	template <auto t_constant> requires
		AutoConstraint
	struct CharacterStreamAdapter<StringView<t_constant>> {

		using ThisI = ICharacterStreamView;

		using ThisO = OCharacterStreamView;

		using That = StringView<t_constant>;

		// ----------------

		inline static auto write (
			ThisO &      thix,
			That const & that
		) -> Void {
			for (auto & element : that) {
				up_cast<OStreamView<Character, BasicCharacterListView>>(thix).write(element);
			}
			return;
		}

		inline static auto read (
			ThisI &      thix,
			That const & that
		) -> Void requires
			(!t_constant.value) {
			for (auto & element : that) {
				up_cast<IStreamView<Character, BasicCharacterListView>>(thix).read(element);
			}
			return;
		}

	};

	#pragma endregion

}
