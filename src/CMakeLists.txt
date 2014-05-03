# generate the actual executable
QT5_WRAP_UI(UIS_HDRS mainWindow.ui)
SET(kazu_SOURCES kazu.cpp)
SET(kazu_HEADERS kazu.hpp)

ADD_EXECUTABLE(kazu ${kazu_SOURCES} ${kazu_HEADERS} ${UIS_HDRS})

# linking
TARGET_LINK_LIBRARIES(kazu Qt5::Widgets Qt5::Multimedia)
