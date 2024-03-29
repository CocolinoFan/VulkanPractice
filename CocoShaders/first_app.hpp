#pragma once

#include "cs_window.hpp"

namespace cs {
 class FirstApp {
	public:
	static constexpr int WIDTH = 800;
	static constexpr int HEIGHT = 600;

	void run();
	

	private:
	CsWin cswin{WIDTH, HEIGHT, "Hello from Vulkan!"};	
 };
}
