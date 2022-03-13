load("@hedron_compile_commands//:refresh_compile_commands.bzl", "refresh_compile_commands")

# Generate compile_commands.json for specific targets
refresh_compile_commands(
    name = "refresh_compile_commands",
    targets = {
        "//hello:helloworld": "",
        "//simplelib/math/...": "",
    },
)
