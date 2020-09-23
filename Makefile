BINARY_NAME=hw
SRC_DIR=src
BUILD_DIR=build

run: main.o
	./${BUILD_DIR}/${BINARY_NAME}

main.o:
	gcc ${SRC_DIR}/main.c -o ${BUILD_DIR}/${BINARY_NAME}
