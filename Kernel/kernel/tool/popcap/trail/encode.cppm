module;

#include "kernel/common.hpp"

export module libra.kernel.tool.popcap.trail.encode;
import libra.kernel.utility;
import libra.kernel.tool.popcap.trail.version;
import libra.kernel.tool.popcap.trail.common;
import libra.kernel.tool.common.byte_stream;

export namespace Libra::Kernel::Tool::PopCap::Trail {

	template <auto version> requires (check_version(version, {}, {}))
	struct Encode :
		Common<version>,
		CommonByteStreamExchangeForOutput {

		using Common = Common<version>;

		using typename Common::Definition;

		using typename Common::MagicIdentifier;

		using Common::k_magic_identifier;

		using typename Common::IntegerOfPlatform;

		// ----------------

		inline static auto exchange_track_node_list (
			OByteStreamView &                            data,
			List<typename Definition::TrackNode> const & value_list
		) -> Void {
			exchange_list_size(data, value_list, &exchange_size_fixed<IntegerU32>);
			for (auto & value : value_list) {
				exchange_floater_fixed<FloaterS32>(data, value.time);
				exchange_floater_fixed<FloaterS32>(data, value.low_value);
				exchange_floater_fixed<FloaterS32>(data, value.high_value);
				exchange_integer_fixed<IntegerU32>(data, value.curve);
				exchange_integer_fixed<IntegerU32>(data, value.distribution);
			}
			return;
		}

		inline static auto exchange_trail (
			OByteStreamView &                  data,
			typename Definition::Trail const & value
		) -> Void {
			auto ignored = Integer{0_i};
			exchange_integer_fixed<IntegerOfPlatform>(data, ignored);
			exchange_integer_fixed<IntegerU32>(data, value.maximum_point);
			exchange_floater_fixed<FloaterS32>(data, value.minimum_point_distance);
			exchange_integer_fixed<IntegerU32>(data, value.flag);
			if constexpr (check_version(version, {}, {true})) {
				exchange_integer_fixed<IntegerU32>(data, ignored);
			}
			for (auto & index : SizeRange{5_sz}) {
				exchange_integer_fixed<IntegerOfPlatform>(data, ignored);
				exchange_integer_fixed<IntegerOfPlatform>(data, ignored);
			}
			if constexpr (check_version(version, {VersionPlatform::Constant::desktop(), VersionPlatform::Constant::television()}, {})) {
				exchange_string_block<IntegerU32>(data, value.image);
			}
			if constexpr (check_version(version, {VersionPlatform::Constant::mobile()}, {})) {
				exchange_integer_fixed<IntegerU32>(data, value.image);
			}
			if constexpr (check_version(version, {VersionPlatform::Constant::television()}, {})) {
				exchange_string_block<IntegerU32>(data, value.image_resource);
			}
			exchange_track_node_list(data, value.width_over_length);
			exchange_track_node_list(data, value.width_over_time);
			exchange_track_node_list(data, value.alpha_over_length);
			exchange_track_node_list(data, value.alpha_over_time);
			exchange_track_node_list(data, value.duration);
			return;
		}

		// ----------------

		inline static auto process_whole (
			OByteStreamView &                  data,
			typename Definition::Trail const & value
		) -> Void {
			data.write_constant(k_magic_identifier);
			exchange_trail(data, value);
			return;
		}

		// ----------------

		inline static auto process (
			OByteStreamView &                  data_,
			typename Definition::Trail const & value
		) -> Void {
			M_use_zps_of(data);
			return process_whole(data, value);
		}

	};

}
