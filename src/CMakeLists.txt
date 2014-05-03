SET(kazu_SOURCES kazu.cpp)
SET(kazu_HEADERS kazu.hpp)
ADD_EXECUTABLE(kazu ${kazu_SOURCES} ${kazu_HEADERS})

TARGET_LINK_LIBRARIES(kazu Qt5::Widgets)
