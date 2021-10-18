#
# Makefile
#

# set the executable name
EXEC=rpn

all: test 

test: 
	baygon -v -t t.yaml ./$(EXEC)

l:
	ls -al

h:
	echo HELLO

.PHONY:	clean all test
.DEFAULT: test 
