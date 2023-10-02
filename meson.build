project(
    'MLPy',
    'c', 'cpp', 'cython',
    version: '1.0',
    license: 'CC0 1.0 Universal',
    default_options: [
    'buildtype=debugoptimized',
    'b_ndebug=if-release',
    'c_std=c99',
    'cpp_std=c++17',
    'pkgconfig.relocatable=true',
  ],
)

cc = meson.get_compiler('c')
cpp = meson.get_compiler('cpp')
cy = meson.get_compiler('cython')

# Check compiler is recent enough
if cc.get_id() == 'gcc'
  if not cc.version().version_compare('>=13.2')
    error('MLPy requires GCC >= 13.2')
  endif
elif cc.get_id() == 'msvc'
  if not cc.version().version_compare('>=19.20')
    error('MLPy requires at least vc142 (default with Visual Studio 2019) ' + \
          'when building with MSVC')
  endif
endif
if not cy.version().version_compare('>=3.0.2')
  error('MLPy requires Cython >=3.0.2')
endif

pymod = import('python')
py = pymod.find_installation('python3.11')
pydep = py.dependency()

if not cc.has_header('Python.h', dependencies: pydep)
  error('Cannot compile `Python.h`. Perhaps you need to install python-dev|python-devel')
else
  message('INFO: Python.h header is included in the compiler')
endif

# Add default compile flags for any compiler that supports them.

subdir('mlpy')