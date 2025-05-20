#include <print>
#include <string>
#include <vector>

auto main(int argc, char const* const* const argv) -> int {
	auto const args = std::vector<std::string> {argv, argv + argc};

	for (auto const& arg : args)
		std::print("{}\n", arg);

	std::print("Hello, world!\n");
	return 0;
}
