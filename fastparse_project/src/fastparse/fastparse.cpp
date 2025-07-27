#include "fastparse.hpp"
#include <fstream>
#include <sstream>
#include <vector>

std::vector<std::vector<std::string>> parse_csv(const std::string& path, size_t limit) {
    std::ifstream file(path);
    std::vector<std::vector<std::string>> result;
    std::string line;
    size_t count = 0;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string cell;
        std::vector<std::string> row;

        while (std::getline(ss, cell, ',')) {
            row.push_back(cell);
        }

        result.push_back(row);
        if (limit > 0 && ++count >= limit) break;
    }

    return result;
}
