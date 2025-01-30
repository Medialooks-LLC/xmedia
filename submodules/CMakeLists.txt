if(NOT TARGET xbase)
    add_subdirectory(xbase)
endif()

if(NOT TARGET xnode)
    add_subdirectory(xnode)
endif()

if(NOT TARGET xutils)
    add_subdirectory(xutils)
endif()

#if(NOT WITH_XSDK_CI_BUILD)
#	add_subdirectory(xutils_cloud)
#endif()