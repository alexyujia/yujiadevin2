module;

#include "kernel/common.hpp"

export module libra.kernel.utility.thread.unlocker;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;
import libra.kernel.utility.thread.mutex;

export namespace Libra::Kernel::Thread {

	#pragma region type

	class Unlocker {

	private:

		Mutex & m_mutex;

	public:

		#pragma region structor

		~Unlocker (
		) {
			thiz.m_mutex.lock();
		}

		// ----------------

		Unlocker (
		) = delete;

		Unlocker (
			Unlocker const & that
		) = delete;

		Unlocker (
			Unlocker && that
		) = delete;

		// ----------------

		explicit Unlocker (
			Mutex & mutex
		) :
			m_mutex{mutex} {
			thiz.m_mutex.unlock();
		}

		#pragma endregion

		#pragma region operator

		auto operator = (
			Unlocker const & that
		) -> Unlocker & = delete;

		auto operator = (
			Unlocker && that
		) -> Unlocker & = delete;

		#pragma endregion

	};

	#pragma endregion

}
