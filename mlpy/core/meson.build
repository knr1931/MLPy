src_common = [
    'src/common/fileutils.cpp'
]

src_classifier = [
    'src/classifier/processdata.cpp'
]

py.extension_module('linclassifier',
    [
        src_common,
        src_classifier,
    ],
    include_directories: [
        'include',
        'src/common',
    ],
    install: true,
    subdir: 'mlpy/core',
)

