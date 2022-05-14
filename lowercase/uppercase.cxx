#include <cstdio>
#include <cctype>

int main(int argc, char** argv) {
  if (2 > argc) { return -1; }
  using std::putchar, std::toupper;
  
  for (++argv; *argv; ++argv) { // argv[argc] is nullptr.
    for (char *s = *argv, c; s and (c = *s); ++s) {
      putchar(toupper(c));
    }
    putchar(--argc ? ' ' : '\b');
  }
}

