#include <cstdio>
#include <cctype>

int main(int argc, char** argv) {
  if (2 > argc) { return -1; }
  using std::putchar, std::tolower;

  for (++argv; *argv; ++argv) { // argv[argc] is nullptr.
    for (char *s = *argv, c; s and (c = *s); ++s) {
      putchar(tolower(c));
    }
    putchar(--argc ? ' ' : '\b');
  }
}
//[0]: Arguments passed to the program are separated by spaces.
//     We need to add them back iff we passed more than one argument.
//     The asignment (c = *s) in the loop condition means we also lose '\0'...
