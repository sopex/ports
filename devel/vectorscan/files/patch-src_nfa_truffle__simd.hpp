--- src/nfa/truffle_simd.hpp.orig	2026-11-11 06:41:16 UTC
+++ src/nfa/truffle_simd.hpp
@@ -268,7 +268,7 @@
 }
 
 template <uint16_t S>
-const u8 *truffleExecReal(const m128 &shuf_mask_lo_highclear, m128 shuf_mask_lo_highset, const u8 *buf, const u8 *buf_end) {
+static const u8 *truffleExecReal(const m128 &shuf_mask_lo_highclear, m128 shuf_mask_lo_highset, const u8 *buf, const u8 *buf_end) {
     assert(buf && buf_end);
     assert(buf < buf_end);
     DEBUG_PRINTF("truffle %p len %zu\n", buf, buf_end - buf);
@@ -334,7 +334,7 @@
 }
 
 template <uint16_t S>
-const u8 *rtruffleExecReal(m128 shuf_mask_lo_highclear, m128 shuf_mask_lo_highset, const u8 *buf, const u8 *buf_end){
+static const u8 *rtruffleExecReal(m128 shuf_mask_lo_highclear, m128 shuf_mask_lo_highset, const u8 *buf, const u8 *buf_end){
     assert(buf && buf_end);
     assert(buf < buf_end);
     DEBUG_PRINTF("trufle %p len %zu\n", buf, buf_end - buf);
