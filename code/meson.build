code_lib = static_library('code_lib', files('program.cpp'),
    include_directories: '.',
    install: true)

code_dep = declare_dependency(
    link_with: code_lib,
    include_directories: '.')

executable('cat', files('main.cpp'), dependencies: code_dep, install: true)
