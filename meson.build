project('INSTA-DDOS', 'cpp', subproject_dir: 'libs',
		default_options: ['buildtype=release', 'strip=true'])

cxx = meson.get_compiler('cpp')

cmake = import('cmake')
co_opt = cmake.subproject_options()

co_opt.add_cmake_defines({'FPIC': true})
co_opt.add_cmake_defines({'WITH_LIBCURL': true})
co_opt.add_cmake_defines({'WITH_OPENSSL': true})

co = cmake.subproject('co', options: co_opt)

deps = [
	co.dependency('co'),
	dependency('threads'),
	cxx.find_library('dl', required: false)
]

executable('INSTA-DDOS', 'src/main.cpp', dependencies: deps, override_options: ['cpp_std=c++20'])
