#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace cs {

 class CsWin {
 	public:
		CsWin(int w, int h, std::string name);
		~CsWin();

 		CsWin(const CsWin &) = delete;
		CsWin &operator=(const CsWin &) = delete;

		bool shouldClose() {return glfwWindowShouldClose(window); }
 
	private:
		void initWindow();

		const int width;
		const int height;
		std::string windowName;
		GLFWwindow* window;

 };
}
