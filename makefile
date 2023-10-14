game: main.cpp 
	@g++ -Wall -Wextra -g3 -std=c++20 main.cpp -o Quest4Knowledge
	@./Quest4Knowledge

clear:
	rm -f Quest4Knowledge

test1: test1.cpp
	@g++ -Wall -Wextra -g3 -std=c++20 test1.cpp -o test1
	@./test1

test2: test2.cpp
	@g++ -Wall -Wextra -g3 -std=c++20 test2.cpp -o test2
	@./test2

test3: test3.cpp
	@g++ -Wall -Wextra -g3 -std=c++20 test3.cpp -o test3
	@./test3

test4: test4.cpp
	@g++ -Wall -Wextra -g3 -std=c++20 test4.cpp -o test4
	@./test4	

test5: test5.cpp 
	@g++ -Wall -Wextra -g3 -std=c++20 test5.cpp -o test5
	@./test5

test6: test6.cpp 
	@g++ -Wall -Wextra -g3 -std=c++20 test6.cpp -o test6
	@./test6