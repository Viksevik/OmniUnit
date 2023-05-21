cmake_minimum_required(VERSION 3.25)
project(OmniUnit)

set(CMAKE_CXX_STANDARD 14)

add_executable(OmniUnit
        "Temp Converter/Temp Conversion.cpp" main.cpp "Metric Imperial Converter/Metric Imperial Converter.cpp" "Metric Imperial Converter/Metric Imperial Converter.h" "Temp Converter/Temp Conversion.h")
