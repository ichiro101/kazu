
INCLUDE_DIRECTORIES(${FFMPEG_INCLUDE_DIR})

# generate the actual executable
QT5_WRAP_UI(UIS_HDRS mainWindow.ui libraryWindow.ui browseLibraryWindow.ui)
SET(kazu_SOURCES kazu.cpp MainWindow.cpp Player.cpp)
SET(kazu_HEADERS kazu.h MainWindow.h Player.h)

# ffmpeg libraries
SET(LIBS ${LIBS} ${FFMPEG_LIBRARIES})

ADD_EXECUTABLE(kazu WIN32 ${kazu_SOURCES} ${kazu_HEADERS} ${UIS_HDRS})


# linking
TARGET_LINK_LIBRARIES(kazu Qt5::Widgets ${LIBS})
