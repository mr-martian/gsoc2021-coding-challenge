all: classify-symbols

classify-symbols: classify.cc
	g++ classify.cc -licuio -licui18n -licuuc -licudata -std=c++11 -o $@

