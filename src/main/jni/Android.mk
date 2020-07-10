LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE    := main
LOCAL_SRC_FILES := main.c

APP_ABI         := all
APP_PLATFORM    := android-23

include $(BUILD_SHARED_LIBRARY)
