src_common = [
    'src/common/futils.cpp'
]

src_classifier = [

]

core_lib = shared_library('core',
    [
        src_common,
    ],
    include_directories: [
        'include',
    ],
    install: true,
    install_dir : join_paths(get_option('prefix'), 'lib'),
)

