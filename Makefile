CC = g++
CFLAGS = -Wall -Wextra -O2 -std=c++17

%: %.cpp
	$(CC) $(CFLAGS) $< -o $@