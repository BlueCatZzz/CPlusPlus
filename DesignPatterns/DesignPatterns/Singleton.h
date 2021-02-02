#pragma once
#include <mutex>

template <class T>
class Singleton
{
public:
	static T* Instance();
private:
	Singleton() {};
	~Singleton() {};
private:
	static T* instance_;
	static std::mutex mutex_;
};

template <class T>
T* Singleton<T>::instance_ = nullptr;

template <class T>
T* Singleton<T>::Instance()
{
	if (nullptr == instance_) {
		mutex_.lock();
		if (nullptr == instance_)
			instance_ = new T();
		mutex_.unlock();
	}

	return instance_;
}