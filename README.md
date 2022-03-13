## GoogleTest


## Generate compile_commands.json
1. `ln -s bazel-out/../../../external .`
2. (Optional) Configure your clangd correctly.
    - For VS Code: Install `clangd` extension and modify your setting.json
    ``` json
    {
        "clangd.arguments": [
            "--compile-commands-dir=${workspaceFolder}"
        ],
    }
    ```
3. Specify the output targets you care about in [BUILD](./BUILD).
4. Run `bazel run //:refresh_compile_commands`


## Debug in VS Code(Troublesome!!! This method is only used when few deps are referenced.)
1. Install C/C++ extension and disable IntelliSense.
2. Build target in dbg mode and modify `launch.json`.  
```bash
bazel build --config debug //hello:helloworld  # build target
```
launch.json: 
```json
"configurations": [
    {
        "sourceFileMap":{
            "/proc/self/cwd/external": "${workspaceFolder}/external",  // Fix $cwd
        },
        "miDebuggerArgs": "-d ${workspaceFolder}/external/com_google_absl/absl",  // Add directory to the path to search for source files.
        "program": "${workspaceFolder}/bazel-bin/hello/helloworld",
    }
]
```
3. Add new breakpoint and start debugging.
