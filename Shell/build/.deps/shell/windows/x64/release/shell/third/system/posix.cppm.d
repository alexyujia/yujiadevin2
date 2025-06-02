{
    files = {
        [[shell\third\system\posix.cppm]]
    },
    values = {
        "-Qunused-arguments",
        "-m64",
        "--target=x86_64-windows-msvc",
        "-fvisibility=hidden",
        "-fvisibility-inlines-hidden",
        "-O3",
        "-std=c++23",
        [[-ID:\Twinning-master\Shell]],
        "-DM_system_windows",
        "-DM_system=\"windows\"",
        "-DM_architecture_x86_64",
        "-DM_architecture=\"x86_64\"",
        "-DM_build_release",
        "-DM_build=\"release\"",
        "-DNOMINMAX",
        "-D_WINSOCKAPI_",
        "-D_UCRT_NOISY_NAN",
        "-D_CRT_SECURE_NO_WARNINGS",
        "-fexceptions",
        "-fcxx-exceptions",
        "-finput-charset=UTF-8",
        "-fexec-charset=UTF-8",
        "-Weverything",
        "-Wno-c++98-compat",
        "-Wno-c++98-compat-pedantic",
        "-Wno-pre-c++14-compat",
        "-Wno-pre-c++17-compat",
        "-Wno-c++20-compat",
        "-Wno-c99-extensions",
        "-Wno-padded",
        "-Wno-redundant-parens",
        "-Wno-missing-field-initializers",
        "-Wno-unused-parameter",
        "-Wno-unused-variable",
        "-Wno-unused-local-typedef",
        "-Wno-missing-noreturn",
        "-Wno-gnu-zero-variadic-macro-arguments",
        "-Wno-ctad-maybe-unsupported",
        "-Wno-global-constructors",
        "-Wno-exit-time-destructors",
        "-Wno-weak-vtables",
        "-Wno-self-assign",
        "-Wno-switch-enum",
        "-Wno-switch-default",
        "-Wno-covered-switch-default",
        "-Wno-shadow-field",
        "-Wno-shadow-field-in-constructor",
        "-Wno-shadow-uncaptured-local",
        "-Wno-unsafe-buffer-usage",
        "-Wno-gnu-line-marker",
        "-Wno-disabled-macro-expansion",
        "-Wno-language-extension-token",
        "-Wno-shadow",
        "-Wno-float-equal",
        "-Wno-deprecated-declarations",
        "-Wno-dollar-in-identifier-extension",
        "-Wno-reserved-user-defined-literal",
        "-Wno-unreachable-code-return",
        "-Wno-unreachable-code-break",
        "-DNDEBUG"
    },
    moduleinfo = "{\
  \"revision\": 0,\
  \"rules\": [\
    {\
      \"primary-output\": \"build\\\\.objs\\\\shell\\\\windows\\\\x64\\\\release\\\\shell\\\\third\\\\system\\\\posix.cppm.obj\",\
      \"provides\": [\
        {\
          \"is-interface\": true,\
          \"logical-name\": \"twinning.shell.third.system.posix\",\
          \"source-path\": \"shell\\\\third\\\\system\\\\posix.cppm\"\
        }\
      ]\
    }\
  ],\
  \"version\": 1\
}\
"
}