project(MotionControl)

set(Boost_USE_STATIC_LIBS        ON)
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)

FIND_PACKAGE(Eigen3 REQUIRED)

add_definitions(-D_AFXDLL -DSIM -D_CRT_SECURE_NO_WARNINGS)

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
	${EIGEN3_INCLUDE_DIR}
)

set(MotionControl_SRCS
Kinematics.cpp        Link.cpp
Constant.h            Kinematics.h          Link.h
)

add_executable(MotionControl
	${MotionControl_SRCS}
)

