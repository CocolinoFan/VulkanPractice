#include "first_app.hpp"

namespace cs {
 void FirstApp::run(){
	while (!cswin.shouldClose()){
		glfwPollEvents();

	}
 }


}
