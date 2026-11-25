--- src/fdr/teddy.cpp.orig	2026-11-11 06:41:16 UTC
+++ src/fdr/teddy.cpp
@@ -234,7 +234,7 @@
 #define TEDDY_VBMI_LOAD_MASK_PATCH  (0xffffffffffffffffULL >> (64 - n_sh))
 
 template<int NMSK>
-hwlm_error_t fdr_exec_teddy_512vbmi_templ(const struct FDR *fdr,
+static hwlm_error_t fdr_exec_teddy_512vbmi_templ(const struct FDR *fdr,
                                       const struct FDR_Runtime_Args *a,
                                       hwlm_group_t control) {
     const u8 *buf_end = a->buf + a->len;
@@ -360,7 +360,7 @@
                          &c_0, &c_16, &c_32, &c_48)
 
 template <int NMSK>
-hwlm_error_t fdr_exec_teddy_512_templ(const struct FDR *fdr,
+static hwlm_error_t fdr_exec_teddy_512_templ(const struct FDR *fdr,
                                       const struct FDR_Runtime_Args *a,
                                       hwlm_group_t control) {
     const u8 *buf_end = a->buf + a->len;
@@ -456,6 +456,7 @@
 
 #ifdef ARCH_64_BIT
 
+static really_inline
 hwlm_error_t confirm_teddy_64_256(m256 var, u8 bucket, u8 offset,
                                   CautionReason reason, const u8 *ptr,
                                   const struct FDR_Runtime_Args *a,
@@ -480,6 +481,7 @@
 
 #else
 
+static really_inline
 hwlm_error_t confirm_teddy_32_256(m256 var, u8 bucket, u8 offset,
                                   CautionReason reason, const u8 *ptr,
                                   const struct FDR_Runtime_Args *a,
@@ -571,7 +573,7 @@
     prep_conf_teddy_256_templ<n>(&lo_mask, dup_mask, ptr, r_msk_base, &c_0, &c_128)
 
 template <int NMSK>
-hwlm_error_t fdr_exec_teddy_256_templ(const struct FDR *fdr,
+static hwlm_error_t fdr_exec_teddy_256_templ(const struct FDR *fdr,
                                   const struct FDR_Runtime_Args *a,
                                   hwlm_group_t control) {
     const u8 *buf_end = a->buf + a->len;
@@ -737,7 +739,7 @@
 }
 
 template <int NMSK>
-hwlm_error_t fdr_exec_teddy_128_templ(const struct FDR *fdr,
+static hwlm_error_t fdr_exec_teddy_128_templ(const struct FDR *fdr,
                              const struct FDR_Runtime_Args *a,
                              hwlm_group_t control) {
     const u8 *buf_end = a->buf + a->len;
