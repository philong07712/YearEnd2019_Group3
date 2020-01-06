LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := MyGame_shared

LOCAL_MODULE_FILENAME := libMyGame

LOCAL_SRC_FILES := $(LOCAL_PATH)/hellocpp/main.cpp \
                   $(LOCAL_PATH)/../../../Classes/AppDelegate.cpp \
                   $(LOCAL_PATH)/../../../Classes/HealthBarLayer.cpp \
                   $(LOCAL_PATH)/../../../Classes/HUDLayer.cpp \
                   $(LOCAL_PATH)/../../../Classes/LoadMapScene.cpp \
                   $(LOCAL_PATH)/../../../Classes/MainMenu.cpp \
                   $(LOCAL_PATH)/../../../Classes/MiniBoss01.cpp \
                   $(LOCAL_PATH)/../../../Classes/Model.cpp \
                   $(LOCAL_PATH)/../../../Classes/Objects.cpp \
                   $(LOCAL_PATH)/../../../Classes/OptionsLayer.cpp \
                   $(LOCAL_PATH)/../../../Classes/PauseLayer.cpp \
                   $(LOCAL_PATH)/../../../Classes/Player.cpp \
                   $(LOCAL_PATH)/../../../Classes/Slash.cpp \
                   $(LOCAL_PATH)/../../../Classes/SneakyJoystick.cpp \
                   $(LOCAL_PATH)/../../../Classes/SneakyJoystickSkinnedBase.cpp \
                   $(LOCAL_PATH)/../../../Classes/Update.cpp \
                   $(LOCAL_PATH)/../../../Classes/Villager.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../Classes

# _COCOS_HEADER_ANDROID_BEGIN
# _COCOS_HEADER_ANDROID_END


LOCAL_STATIC_LIBRARIES := cc_static

# _COCOS_LIB_ANDROID_BEGIN
# _COCOS_LIB_ANDROID_END

include $(BUILD_SHARED_LIBRARY)

$(call import-module, cocos)

# _COCOS_LIB_IMPORT_ANDROID_BEGIN
# _COCOS_LIB_IMPORT_ANDROID_END
