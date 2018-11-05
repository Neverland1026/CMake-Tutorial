# project details
# name
project(exe1)

# add your headers and source files here
SET(${PROJECT_NAME}_headers "")
SET(${PROJECT_NAME}_sources main.cpp)

# create executable(very important)
add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_headers} ${${PROJECT_NAME}_sources})

# linker
target_link_libraries(${PROJECT_NAME} dll1)

# install
install(TARGETS ${PROJECT_NAME}
                RUNTIME DESTINATION bin
                LIBRARY DESTINATION lib
                ARCHIVE DESTINATION lib/static)