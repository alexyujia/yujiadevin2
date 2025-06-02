module;

#include "kernel/common.hpp"

export module libra.kernel.utility.thread.locker;
import libra.kernel.utility.builtin;
import libra.kernel.utility.trait;
import libra.kernel.utility.box;
import libra.kernel.utility.exception.utility;
import libra.kernel.utility.thread.mutex;

export namespace Libra::Kernel::Thread {

	#pragma region type

	class Locker {

	private:

		Mutex & m_mutex;

	public:

		#pragma region structor

		~Locker (
		) {
			thiz.m_mutex.unlock();
		}

		// ----------------

		Locker (
		) = delete;

		Locker (
			Locker const & that
		) = delete;

		Locker (
			Locker && that
		) = delete;

		// ----------------

		explicit Locker (
			Mutex & mutex
		) :
			m_mutex{mutex} {
			thiz.m_mutex.lock();
		}

		#pragma endregion

		#pragma region operator

		auto operator = (
			Locker const & that
		) -> Locker & = delete;

		auto operator = (
			Locker && that
		) -> Locker & = delete;

		#pragma endregion

	};

	#pragma endregion

}
