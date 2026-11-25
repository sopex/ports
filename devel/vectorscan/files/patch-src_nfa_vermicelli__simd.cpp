--- src/nfa/vermicelli_simd.cpp.orig	2026-11-11 06:41:16 UTC
+++ src/nfa/vermicelli_simd.cpp
@@ -186,7 +186,7 @@
 // Reverse vermicelli scan. Provides exact semantics and returns (buf - 1) if
 // character not found.
 template <uint16_t S>
-const u8 *rvermicelliExecReal(SuperVector<S> const chars, SuperVector<S> const casemask, const u8 *buf, const u8 *buf_end) {
+static const u8 *rvermicelliExecReal(SuperVector<S> const chars, SuperVector<S> const casemask, const u8 *buf, const u8 *buf_end) {
     assert(buf && buf_end);
     assert(buf < buf_end);
     DEBUG_PRINTF("rverm %p len %zu\n", buf, buf_end - buf);
@@ -241,7 +241,7 @@
 // Reverse vermicelli scan. Provides exact semantics and returns (buf - 1) if
 // character not found.
 template <uint16_t S>
-const u8 *rnvermicelliExecReal(SuperVector<S> const chars, SuperVector<S> const casemask, const u8 *buf, const u8 *buf_end) {
+static const u8 *rnvermicelliExecReal(SuperVector<S> const chars, SuperVector<S> const casemask, const u8 *buf, const u8 *buf_end) {
     assert(buf && buf_end);
     assert(buf < buf_end);
     DEBUG_PRINTF("rverm %p len %zu\n", buf, buf_end - buf);
@@ -363,7 +363,7 @@
 
 // /* returns highest offset of c2 (NOTE: not c1) */
 template <uint16_t S>
-const u8 *rvermicelliDoubleExecReal(char c1, char c2, SuperVector<S> const casemask, const u8 *buf, const u8 *buf_end) {
+static const u8 *rvermicelliDoubleExecReal(char c1, char c2, SuperVector<S> const casemask, const u8 *buf, const u8 *buf_end) {
     assert(buf && buf_end);
     assert(buf < buf_end);
     DEBUG_PRINTF("rverm %p len %zu\n", buf, buf_end - buf);
