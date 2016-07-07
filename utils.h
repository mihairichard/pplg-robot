#pragma once

struct non_copyable {
	non_copyable() {}
	non_copyable(non_copyable&) = delete;
	non_copyable(non_copyable*) = delete;
	non_copyable& operator=(non_copyable&) = delete;
	non_copyable& operator=(non_copyable*) = delete;
	virtual ~non_copyable() {}
};
