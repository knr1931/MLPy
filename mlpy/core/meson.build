src_common = [
    'src/common/fileutils.cpp'
]

py.extension_module('linclassifier',
    [
        src_common,
    ],
    include_directories: [
        'include',
        'src/common',
    ],
    install: true,
    subdir: 'mlpy/core',
)

