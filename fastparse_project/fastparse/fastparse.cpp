#include <pybind11/pybind11.h>
#include "fastparse.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_fastparse, m) {
    m.doc() = "FastParse - szybki parser CSV w C++";
    m.def("read_csv", &parse_csv, "Parsuje plik CSV i zwraca string (placeholder)");
}
