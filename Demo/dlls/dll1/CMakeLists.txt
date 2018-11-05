# project details
project(dll1)

# add your headers and source files here
SET (${PROJECT_NAME}_headers dll1.h)
SET (${PROJECT_NAME}_sources dll1.cpp)

# creat binaries
add_library (${PROJECT_NAME} SHARED ${${PROJECT_NAME}_headers} ${${PROJECT_NAME}_sources})

# linker
target_link_libraries(${PROJECT_NAME} lib1)

# install
install(TARGETS ${PROJECT_NAME}
                RUNTIME DESTINATION bin
                LIBRARY DESTINATION lib
                ARCHIVE DESTINATION lib/static)