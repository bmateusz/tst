SOURCES=$(wildcard *.c)
EXECUTABLES=$(SOURCES:.c=)

all: $(EXECUTABLES)

%: %.c
	$(CC) $< -o $@

.PHONY: clean check footer
clean:
	$(RM) $(EXECUTABLES)

check: $(EXECUTABLES)
	./$<

footer: $(SOURCES)
	./footer.sh $<
