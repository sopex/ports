--- src/fdr/teddy_fat.cpp.orig	2026-11-11 06:41:16 UTC
+++ src/fdr/teddy_fat.cpp
@@ -108,6 +108,7 @@
 };
 
 #ifdef ARCH_64_BIT
+static really_inline
 hwlm_error_t confirm_fat_teddy_64_512(m512 var, u8 bucket, u8 offset,
                                   CautionReason reason, const u8 *ptr,
                                   const struct FDR_Runtime_Args *a,
@@ -142,6 +143,7 @@
 #define confirm_fat_teddy_512_f confirm_fat_teddy_64_512
 #else // 32-64
 
+static really_inline
 hwlm_error_t confirm_fat_teddy_32_512(m512 var, u8 bucket, u8 offset,
                                   CautionReason reason, const u8 *ptr,
                                   const struct FDR_Runtime_Args *a,
@@ -246,7 +248,7 @@
 #define TEDDY_VBMI_LOAD_MASK_PATCH  (0xffffffffffffffffULL >> (64 - n_sh))
 
 template<int NMSK>
-hwlm_error_t fdr_exec_fat_teddy_512vbmi_templ(const struct FDR *fdr,
+static hwlm_error_t fdr_exec_fat_teddy_512vbmi_templ(const struct FDR *fdr,
                                               const struct FDR_Runtime_Args *a,
                                               hwlm_group_t control) {
     const u8 *buf_end = a->buf + a->len;
@@ -433,7 +435,7 @@
 }
 
 template<int NMSK>
-hwlm_error_t fdr_exec_fat_teddy_256_templ(const struct FDR *fdr,
+static hwlm_error_t fdr_exec_fat_teddy_256_templ(const struct FDR *fdr,
                                           const struct FDR_Runtime_Args *a,
                                           hwlm_group_t control) {
     const u8 *buf_end = a->buf + a->len;
