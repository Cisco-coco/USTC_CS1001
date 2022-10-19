all: demo

BUILD_DIRS := ./build
SRC_DIRS := ./src

SRCS := $(shell find $(SRC_DIRS) -name '*.cpp')

demo: ${SRCS}  | build
	g++ -o ${BUILD_DIRS}/$@ $^

# $@指代当前目标, $< 指代第一个前置条件, $^ 指代所有前置条件

build:
	mkdir -p build

.PHONY: clean

clean:
	rm -rf build
