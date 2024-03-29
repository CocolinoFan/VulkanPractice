#pragma once

#include "cs_window.hpp"
#include "cs_pipeline.hpp"

namespace cs {
 class FirstApp {
	public:
	static constexpr int WIDTH = 800;
	static constexpr int HEIGHT = 600;

	void run();
	

	private:
	CsWin cswin{WIDTH, HEIGHT, "Hello from Vulkan!"};
	CsPipeline csPipleine{"shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv"};
 };
}
