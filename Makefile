BINARY_NAME=hw
SRC_DIR=src
BUILD_DIR=build

run: main.o
	./${BUILD_DIR}/${BINARY_NAME}

main.o:
	gcc -o ${BUILD_DIR}/${BINARY_NAME} \
		${SRC_DIR}/util.c \
		${SRC_DIR}/main.c
