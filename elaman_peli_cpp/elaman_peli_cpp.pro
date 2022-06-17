TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    askPlayerInfo.cpp \
    errors.cpp \
    generateRandomValues.cpp \
    generateWelcomeMessage.cpp \
    main.cpp \
    valueChecks.cpp \
    valueConversions.cpp


HEADERS +=

DISTFILES += \
    credits.txt \
    instructions.txt
