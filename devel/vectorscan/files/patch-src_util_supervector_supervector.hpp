--- src/util/supervector/supervector.hpp.orig	2026-11-11 06:41:16 UTC
+++ src/util/supervector/supervector.hpp
@@ -370,7 +370,7 @@
 struct Unroller
 {
   template<typename Action>
-  static void iterator(Action &&action)
+  static really_inline void iterator(Action &&action)
   {
     action(std::integral_constant<int, Begin>());
     Unroller<Begin + 1, End>::iterator(action);
@@ -381,7 +381,7 @@
 struct Unroller<End, End>
 {
   template<typename Action>
-  static void iterator(Action &&action UNUSED)
+  static really_inline void iterator(Action &&action UNUSED)
   {}
 };
 
