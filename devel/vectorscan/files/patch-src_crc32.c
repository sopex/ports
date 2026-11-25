--- src/crc32.c.orig	2026-11-11 06:41:16 UTC
+++ src/crc32.c
@@ -31,7 +31,7 @@
 #include "ue2common.h"
 #include "util/arch.h"
 
-#if !defined(HAVE_SSE42)
+#if !defined(HAVE_SSE42) || defined(VS_SIMDE_BACKEND)
 
 /***
  *** What follows is derived from Intel's Slicing-by-8 CRC32 impl, which is BSD
@@ -586,7 +586,7 @@ static u32 crc32c_sse42(u32 crc, unsigned char const *
 
 // Externally visible function
 u32 Crc32c_ComputeBuf(u32 inCrc32, const void *buf, size_t bufLen) {
-#if defined(HAVE_SSE42)
+#if defined(HAVE_SSE42) && !defined(VS_SIMDE_BACKEND)
     u32 crc = crc32c_sse42(inCrc32, (const unsigned char *)buf, bufLen);
 #else
     u32 crc = crc32c_sb8_64_bit(inCrc32, (const unsigned char *)buf, bufLen);
