load(
    "//:defs/_copts.bzl",
    "GCC_FLAGS",
    "GCC_TEST_FLAGS",
)

DEFAULT_COPTS = select({
    "//conditions:default": GCC_FLAGS,
})

TEST_COPTS = DEFAULT_COPTS + select({
    "//conditions:default": GCC_TEST_FLAGS,
})