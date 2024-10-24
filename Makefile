# Makefile for C++ project

# Compiler
CXX = g++

# C++ standard
CXXFLAGS = -std=c++11

# Source files
SRCS = src/cpp/main.cpp

# Output binary
TARGET = main
BUILD_DIR = build

# Build the project
all: ${BUILD_DIR}/${TARGET}

${BUILD_DIR}/${TARGET}: ${SRCS}
	# Create the build directory if it doesn't exist
	mkdir -p ${BUILD_DIR}
	# Compile the source files into the target executable
	${CXX} ${SRCS} -o ${BUILD_DIR}/${TARGET}

# Clean the project
clean:
	rm -f ${TARGET}


# Run the project
run: all 
	./${BUILD_DIR}/${TARGET}