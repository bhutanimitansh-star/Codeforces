{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Compile and Run (input/output)",
      "type": "shell",
      "command": "g++",
      "args": [
        "-std=c++17",
        "main.cpp",
        "-o",
        "main.exe"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": [],
      "detail": "Compiles the C++ code"
    },
    {
      "label": "Run with Input/Output",
      "type": "shell",
      "command": "./main.exe < input.txt > output.txt",
      "dependsOn": "Compile and Run (input/output)",
      "group": "test",
      "problemMatcher": [],
      "detail": "Runs the code with input.txt and writes to output.txt"
    }
  ]
}
