#include "cs_window.hpp"

namespace cs {
 CsWin::CsWin(int w, int h, std::string name) : width{w}, height{h}, windowName{name} {
	initWindow();
 }

 CsWin::~CsWin(){
	glfwDestroyWindow(window);
	glfwTerminate();
 }

 void CsWin::initWindow(){
	glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
 }
}
