workspace(name = "bazel_demo")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

# Google Abseil
git_repository(
    name = "com_google_absl",
    commit = "215105818dfde3174fe799600bb0f3cae233d0bf",
    remote = "git@github.com:abseil/abseil-cpp.git",
    # branch = "lts_2021_11_02",
    shallow_since = "1635953174 -0400",
)

# GoogleTest/GoogleMock framework. Used by most unit-tests.
http_archive(
    name = "com_google_googletest",  # 2022-01-28T15:27:11Z
    sha256 = "eb70a6d4520f940956a6b3e37d205d92736bb104c6a1b2b9f82bfc41bd7a2b34",
    strip_prefix = "googletest-28e1da21d8d677bc98f12ccc7fc159ff19e8e817",
    urls = ["https://github.com/google/googletest/archive/28e1da21d8d677bc98f12ccc7fc159ff19e8e817.zip"],
)

# Google benchmark.
http_archive(
    name = "com_github_google_benchmark",  # 2021-09-20T09:19:51Z
    sha256 = "62e2f2e6d8a744d67e4bbc212fcfd06647080de4253c97ad5c6749e09faf2cb0",
    strip_prefix = "benchmark-0baacde3618ca617da95375e0af13ce1baadea47",
    urls = ["https://github.com/google/benchmark/archive/0baacde3618ca617da95375e0af13ce1baadea47.zip"],
)

# Bazel platform rules.
http_archive(
    name = "platforms",
    sha256 = "b601beaf841244de5c5a50d2b2eddd34839788000fa1be4260ce6603ca0d8eb7",
    strip_prefix = "platforms-98939346da932eef0b54cf808622f5bb0928f00b",
    urls = ["https://github.com/bazelbuild/platforms/archive/98939346da932eef0b54cf808622f5bb0928f00b.zip"],
)

# Used to generate compile_commands.json for clangd
http_archive(
    name = "hedron_compile_commands",
    sha256 = "9fda864ddae428ad0e03f7669ff4451554afac116e913cd2cd619ac0f40db8d9",
    strip_prefix = "bazel-compile-commands-extractor-1d21dc390e20ecb24d73e9dbb439e971e0d30337",
    url = "https://github.com/hedronvision/bazel-compile-commands-extractor/archive/1d21dc390e20ecb24d73e9dbb439e971e0d30337.tar.gz",
)

load("@hedron_compile_commands//:workspace_setup.bzl", "hedron_compile_commands_setup")

hedron_compile_commands_setup()
