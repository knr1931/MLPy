subdir('core')

mlpy_include_directories = [
    'core',
    'core/include',
]

mlpy_exe = executable(
    'mlpy',
    'mlpy.cpp',
    include_directories: mlpy_include_directories,
    link_with:core_lib,
    install:true,
    install_dir : join_paths(get_option('prefix'), 'bin'),
    link_with: [core_lib,],
)