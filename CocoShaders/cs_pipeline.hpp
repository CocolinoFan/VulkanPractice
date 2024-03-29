#pragma once

#include <string>
#include <vector>

 namespace cs {
	class CsPipeline {
		public:
		CsPipeline(const std::string& vertFilepath, const std::string& fragFilepath);

		private:
		static std::vector<char> readFile(const std::string& filepath);
		void createGraphicsPipeline(const std::string& vertFilepath, const std::string& fragFilepath);

	};
 }
