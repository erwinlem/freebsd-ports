--- src/3rdparty/chromium/services/device/time_zone_monitor/time_zone_monitor_linux.cc.orig	2023-09-13 12:11:42 UTC
+++ src/3rdparty/chromium/services/device/time_zone_monitor/time_zone_monitor_linux.cc
@@ -131,7 +131,11 @@ class TimeZoneMonitorLinuxImpl
     // false positives are harmless, assuming the false positive rate is
     // reasonable.
     const char* const kFilesToWatch[] = {
+#if BUILDFLAG(IS_BSD)
+        "/etc/localtime",
+#else
         "/etc/localtime", "/etc/timezone", "/etc/TZ",
+#endif
     };
     for (size_t index = 0; index < std::size(kFilesToWatch); ++index) {
       file_path_watchers_.push_back(std::make_unique<base::FilePathWatcher>());
