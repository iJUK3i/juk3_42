IDIR= repo/incl/

NAME= proj
LIB= libproj.a
LN= proj

SRC= repo/srcs/*.c
OBJS= *.o
MN= main.c
BETA= a.out

ERR= gcc
GCC= gcc -Wall -Werror -Wextra
RM= rm -f
SRM= rm -rf
AR= ar rcv
IX= ranlib
L= -L. -l
FT= mv ft_*.c repo/srcs/

QQ= echo 'not setup yet'
BOX= mkdir box && mv *.c *.a *.o a.out proj box/

all: $(NAME)

$(NAME):
	$(GCC) -c $(SRC) -I$(DIR)
	$(AR) $(LIB) $(OBJS)
	$(IX) $(LIB)
	$(GCC) $(MN) -I$(IDIR) $(L)$(LN) -o $(NAME)

clean:
	$(RM) $(OBJS) $(BETA)

fclean: clean
	$(RM) $(NAME) $(LIB)

re: fclean all

box:
	$(BOX)

lib: add
	$(RM) $(OBJS)

func:
	$(FT)

main:
	$(GCC) $(MN)

gcm:
	$(GCC) $(MN) -I$(IDIR)

poof:
	$(QQ)

qq:
	$(QQ)

add:
	$(GCC) -c $(SRC) -I$(IDIR)
	$(AR) $(LIB) $(OBJS)
	$(IX) $(LIB)

no: clean
	$(ERR) $(MN) -I$(IDIR) $(L)$(LN)

beta: clean
	$(GCC) $(MN) -I$(IDIR) $(L)$(LN)
