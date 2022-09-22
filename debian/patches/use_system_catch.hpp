Author: Michael R. Crusoe <crusoe@debian.org>
Description: Use the packaged version of catch.hpp
Forwarded: not-needed
--- spdlog.orig/tests/includes.h
+++ spdlog/tests/includes.h
@@ -1,6 +1,6 @@
 #pragma once
 
-#include "catch.hpp"
+#include <catch2/catch.hpp>
 #include "utils.h"
 #include <chrono>
 #include <cstdio>
@@ -23,4 +23,4 @@
 #include "spdlog/sinks/ostream_sink.h"
 #include "spdlog/sinks/rotating_file_sink.h"
 #include "spdlog/sinks/stdout_color_sinks.h"
-#include "spdlog/pattern_formatter.h"
\ No newline at end of file
+#include "spdlog/pattern_formatter.h"
--- spdlog.orig/tests/main.cpp
+++ spdlog/tests/main.cpp
@@ -1,2 +1,2 @@
 #define CATCH_CONFIG_MAIN
-#include "catch.hpp"
\ No newline at end of file
+#include <catch2/catch.hpp>
