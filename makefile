TARGET := hello

SOURCES := \
  src \

INCLUDES := \
  build

include $(dir $(realpath $(lastword $(MAKEFILE_LIST))))/makefile-worker.mk
