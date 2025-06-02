module;

#include "kernel/common.hpp"

export module libra.kernel.utility.thread.mutex;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;

export namespace Libra::Kernel::Thread {

	#pragma region type

	class Mutex {

	private:

		std::mutex m_mutex;

	public:

		#pragma region structor

		~Mutex (
		) = default;

		// ----------------

		Mutex (
		) :
			m_mutex{} {
		}

		Mutex (
			Mutex const & that
		) = delete;

		Mutex (
			Mutex && that
		) = delete;

		#pragma endregion

		#pragma region operator

		auto operator = (
			Mutex const & that
		) -> Mutex & = delete;

		auto operator = (
			Mutex && that
		) -> Mutex & = delete;

		#pragma endregion

		#pragma region control

		auto lock (
		) -> Void {
			thiz.m_mutex.lock();
			return;
		}

		auto unlock (
		) -> Void {
			thiz.m_mutex.unlock();
			return;
		}

		#pragma endregion

	};

	#pragma endregion

}
