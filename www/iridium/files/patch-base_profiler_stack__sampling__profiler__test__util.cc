--- base/profiler/stack_sampling_profiler_test_util.cc.orig	2025-03-18 16:46:04 UTC
+++ base/profiler/stack_sampling_profiler_test_util.cc
@@ -50,7 +50,7 @@
 // Fortunately, it provides _alloca, which functions identically.
 #include <malloc.h>
 #define alloca _alloca
-#else
+#elif !BUILDFLAG(IS_BSD)
 #include <alloca.h>
 #endif
 
