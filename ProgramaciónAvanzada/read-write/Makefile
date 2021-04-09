hard_compiler:
	@xcrun clang++ -std=c++17 -stdlib=libc++ -Weverything -Wno-c++98-compat $(file)
	
compiler:
	@xcrun clang++ -std=c++17 -stdlib=libc++ -Wno-c++98-compat $(file)

run:
	@./a.out

pls: compiler run

.PHONY: compiler run cr
