TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    askPlayerName.cpp \
    askPlayerPlaceOfBirth.cpp \
    fileReadingErrors.cpp \
    generateRandomValues.cpp \
    generateWelcomeMessage.cpp \
    main.cpp \
    valueChecks.cpp \
    valueConversions.cpp \
    valueErrors.cpp


HEADERS +=

DISTFILES += \
    credits.txt \
    instructions.txt
