#pragma once
#include <string>
#include <vector>

std::vector<std::vector<std::string>> parse_csv(const std::string& path, size_t limit = 0);
