THEOS_DEVICE_IP = 192.168.18.50
THEOS_LIBRARY_PATH := $(THEOS)/lib
#THEOS_DEVICE_PORT = 2222
ARCHS = armv7 arm64

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = wxTweak
wxTweak_FILES = Tweak.xm
wxTweak_FRAMEWORKS = UIKit Foundation
wxTweak_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"
