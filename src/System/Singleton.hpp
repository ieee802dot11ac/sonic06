#pragma once

namespace Sonicteam {
namespace System {

template <typename T, typename Location> class Singleton;

template <typename T> class CreateStatic {
	friend class Singleton<T, CreateStatic<T> >;
	static T &Instance(void) {
		static T Instance;
		return Instance;
	}
};

template <typename T, typename Location = class CreateStatic<T> >
class Singleton {
public:
	static T &GetSingleton(void) { return CreateStatic<T>::Instance(); }
};
} // namespace System
} // namespace Sonicteam
