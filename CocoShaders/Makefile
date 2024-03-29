
CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

VulkanApp: *.cpp *.hpp
	g++ $(CFLAGS) -o VulkanApp *.cpp $(LDFLAGS)

.PHONY: test clean

test: VulkanApp
	./VulkanApp

clean:
	rm -f VulkanApp
