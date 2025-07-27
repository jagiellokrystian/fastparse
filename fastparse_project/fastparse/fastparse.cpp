#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "fastparse.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_fastparse, m) {
    m.doc() = "FastParse - szybki parser CSV w C++";
    m.def("read_csv", &parse_csv, py::arg("path"), py::arg("limit") = 0,
          "Parsuje plik CSV i zwraca listę wierszy");
}
