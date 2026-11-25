--- cmake/cflags-generic.cmake.orig	2026-05-02 04:09:59 UTC
+++ cmake/cflags-generic.cmake
@@ -1,6 +1,6 @@
 # set compiler flags - more are tested and added later
-set(EXTRA_C_FLAGS "${OPT_C_FLAG} -std=c17 -Wall -Wextra ")
-set(EXTRA_CXX_FLAGS "${OPT_CXX_FLAG} -std=c++17 -Wall -Wextra ")
+set(EXTRA_C_FLAGS "-std=c17 -Wall -Wextra ")
+set(EXTRA_CXX_FLAGS "-std=c++17 -Wall -Wextra ")
 if (NOT CMAKE_COMPILER_IS_CLANG)
     set(EXTRA_CXX_FLAGS "${EXTRA_CXX_FLAGS} -fno-new-ttp-matching")
 endif()
@@ -26,10 +26,6 @@
 CHECK_INCLUDE_FILES(unistd.h HAVE_UNISTD_H)
 CHECK_FUNCTION_EXISTS(posix_memalign HAVE_POSIX_MEMALIGN)
 CHECK_FUNCTION_EXISTS(_aligned_malloc HAVE__ALIGNED_MALLOC)
-
-if(FREEBSD OR NETBSD)
-    set(EXTRA_CXX_FLAGS "${EXTRA_CXX_FLAGS} -gdwarf-4")
-endif()
 
 if(NETBSD)
     set(EXTRA_C_FLAGS "${EXTRA_C_FLAGS} -DHAVE_BUILTIN_POPCOUNT")
