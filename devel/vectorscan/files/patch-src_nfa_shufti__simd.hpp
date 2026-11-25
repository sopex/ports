--- src/nfa/shufti_simd.hpp.orig	2026-11-11 06:41:16 UTC
+++ src/nfa/shufti_simd.hpp
@@ -92,7 +92,7 @@
 }
 
 template <uint16_t S>
-const u8 *shuftiExecReal(m128 mask_lo, m128 mask_hi, const u8 *buf, const u8 *buf_end) {
+static const u8 *shuftiExecReal(m128 mask_lo, m128 mask_hi, const u8 *buf, const u8 *buf_end) {
     assert(buf && buf_end);
     assert(buf < buf_end);
     DEBUG_PRINTF("shufti %p len %zu\n", buf, buf_end - buf);
@@ -144,7 +144,7 @@
 }
 
 template <uint16_t S>
-const u8 *rshuftiExecReal(m128 mask_lo, m128 mask_hi, const u8 *buf, const u8 *buf_end) {
+static const u8 *rshuftiExecReal(m128 mask_lo, m128 mask_hi, const u8 *buf, const u8 *buf_end) {
     assert(buf && buf_end);
     assert(buf < buf_end);
     DEBUG_PRINTF("rshufti %p len %zu\n", buf, buf_end - buf);
@@ -224,7 +224,7 @@
 }
 
 template <uint16_t S>
-const u8 *shuftiDoubleExecReal(m128 mask1_lo, m128 mask1_hi, m128 mask2_lo, m128 mask2_hi,
+static const u8 *shuftiDoubleExecReal(m128 mask1_lo, m128 mask1_hi, m128 mask2_lo, m128 mask2_hi,
                            const u8 *buf, const u8 *buf_end) {
     assert(buf && buf_end);
     assert(buf < buf_end);
