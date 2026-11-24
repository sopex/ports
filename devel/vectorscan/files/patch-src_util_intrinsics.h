--- src/util/intrinsics.h.orig	2026-11-09 09:25:32 UTC
+++ src/util/intrinsics.h
@@ -35,6 +35,7 @@
 
 #include "config.h"
 
+#if !defined(VS_SIMDE_BACKEND)
 #ifdef __cplusplus
 # if defined(HAVE_CXX_X86INTRIN_H)
 #  define USE_X86INTRIN_H
@@ -44,6 +45,7 @@
 #  define USE_X86INTRIN_H
 # endif
 #endif
+#endif
 
 #if defined(HAVE_C_ARM_NEON_H)
 #  define USE_ARM_NEON_H
@@ -53,6 +55,7 @@
 #  define USE_PPC64EL_ALTIVEC_H
 #endif
 
+#if !defined(VS_SIMDE_BACKEND)
 #ifdef __cplusplus
 # if defined(HAVE_CXX_INTRIN_H)
 #  define USE_INTRIN_H
@@ -61,6 +64,7 @@
 # if defined(HAVE_C_INTRIN_H)
 #  define USE_INTRIN_H
 # endif
+#endif
 #endif
 
 #if defined(USE_X86INTRIN_H)
