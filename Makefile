TestChain: main.cpp Block.cpp Blockchain.cpp sha256.cpp
	gcc -lstdc++ -o TestChain -std=c++11 -stdlib=libc++ -x c++ main.cpp Block.cpp Blockchain.cpp sha256.cpp
