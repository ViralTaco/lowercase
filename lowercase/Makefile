CXX = clang++
LDFLAGS = -std=c++20 -march=native -Ofast -DNDEBUG
PREFIX = /usr/local

.PHONY: install
install:
	$(CXX) ./lowercase.cxx $(LDFLAGS) -o lowercase
	$(CXX) ./uppercase.cxx $(LDFLAGS) -o uppercase
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp uppercase $(DESTDIR)$(PREFIX)/bin/uppercase
	cp lowercase $(DESTDIR)$(PREFIX)/bin/lowercase

.PHONY: uninstall
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/lowercase
	rm -f $(DESTDIR)$(PREFIX)/bin/uppercase
