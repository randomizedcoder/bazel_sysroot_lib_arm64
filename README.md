# bazel_sysroot_lib_arm64

This sysroot provides ARM64-specific shared libraries for Bazel builds. It is part of a larger system of sysroots that work together to provide a complete build environment.

## Purpose

The `bazel_sysroot_lib_arm64` sysroot is responsible for providing ARM64-specific shared libraries that are required for building and running applications on ARM64 architectures. It works in conjunction with:

- `bazel_sysroot_library` - Provides common headers and system libraries
- `bazel_sysroot_llvm_arm64` - Provides ARM64-specific LLVM tools

## Directory Structure

```
sysroot/
└── lib/           # ARM64-specific shared libraries
    └── *.so*      # Shared library files
```

## BUILD File Targets

The `BUILD.sysroot.bazel` file defines the following targets:

```python
filegroup(
    name = "all",
    srcs = [":lib"],
)

filegroup(
    name = "lib",
    srcs = glob(["lib/**"]),
    allow_empty = True,
)

cc_library(
    name = "system_libs",
    srcs = glob(["lib/*.so*"]),
    linkstatic = 1,
    visibility = ["//visibility:public"],
)
```

## Included Libraries

This sysroot includes ARM64-specific versions of:

- Core system libraries:
  - glibc
  - gcc-unwrapped
- Compression libraries:
  - zlib
  - bzip2
  - xz
- XML and parsing:
  - libxml2
  - expat
- Networking:
  - openssl
  - curl
- Text processing:
  - pcre
  - pcre2
- JSON:
  - jansson
- Database:
  - sqlite
- Image processing:
  - libpng
  - libjpeg
- System utilities:
  - util-linux

## Usage in Bazel

This sysroot is typically used as part of the LLVM toolchain configuration in your `MODULE.bazel`:

```python
llvm_toolchain(
    name = "llvm_arm64",
    llvm_version = "20.1.2",
    build_file = "//:llvm.BUILD",
    sysroot = {
        "include_prefix": "@bazel_sysroot_library//sysroot",
        "lib_prefix": "@bazel_sysroot_lib_arm64//sysroot",
    },
)
```

## Building

To build this sysroot:

```bash
nix-build default.nix
```

The resulting sysroot will be available in the `result/sysroot` directory.
