##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

CC 	= 	gcc

CFLAGS 	=  	-Iinclude -Wall -Wextra -Wshadow

CHM     =	src/

SRC 	=  	$(CHM)main.c   \
			$(CHM)choose_operation.c  \
			$(CHM)add_numbers.c   \

SRCTEST =	$(CHM)choose_operation.c  \
			$(CHM)add_numbers.c   \

TEST 	=	./tests/test.c

NAME 	= 	calculator

NAMETEST = 	unit_tests

OBJ 	=	$(SRC:%.c=%.o)

OBJTEST = 	$(SRCTEST:%.c=%.o)

.c.o	:
	@$(CC) $(CFLAGS) $(INCL) -c $< -o $@
	@printf " \033[34m[Compilation]\033[39m %s\n" $<

all	:	$(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)
	@printf "\n \033[33m[Message]\033[39m Compilation done\n"

tests_run	:	$(OBJTEST)
	@$(CC) $(OBJTEST) $(TEST) -o $(NAMETEST) $(LDFLAGS) -lcriterion

	@printf "\n \033[33m[Message]\033[39m Compilation of tests done\n"

clean	:
	@$(RM) -f $(OBJ)
	@printf " \033[31m[Delete] \033[39m%s\n" $(OBJ)

fclean	:	clean
	@$(RM) -f $(NAME)
	@$(RM) -f $(NAMETEST)
	@printf "\n \033[31m[Delete] \033[39m%s\n" $(NAME)
	@printf " \033[31m[Delete] \033[39m%s\n" $(NAMETEST)

re	:	fclean all

debug:	CFLAGS += -g
debug:	re

.PHONY 	= 	all clean fclean re
