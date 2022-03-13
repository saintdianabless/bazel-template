load(
    "//:defs/copts.bzl",
    "DEFAULT_COPTS",
    "TEST_COPTS",
)

package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "math",
    srcs = ["add.cpp"],
    hdrs = ["add.h"],
    copts = DEFAULT_COPTS,
)

cc_test(
    name = "add_test",
    size = "small",
    srcs = ["add_test.cpp"],
    copts = TEST_COPTS,
    visibility = ["//visibility:private"],
    deps = [
        ":math",
        "@com_google_googletest//:gtest_main",
    ],
)
