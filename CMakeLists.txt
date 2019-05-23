cmake_minimum_required(VERSION 3.14)
project(Fractal_Img)

set(CMAKE_CXX_STANDARD 14)

include_directories(includes)

add_executable(Fractal_Img
        includes/Bitmap.h
        includes/BitmapFileHeader.h
        includes/BitmapInfoHeader.h
        includes/Fractal.h
        includes/Mandelbrot.h
        includes/Zoom.h
        includes/ZoomList.h
        src/Bitmap.cpp
        src/Fractal.cpp
        src/Mandelbrot.cpp
        src/ZoomList.cpp
        main.cpp includes/RGB.h src/RGB.cpp)
