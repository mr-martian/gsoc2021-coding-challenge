#include <unicode/uchar.h>
#include <unicode/ustdio.h>

int main(int argc, char* argv[])
{
  UFILE* input = u_finit(stdin, NULL, NULL);
  UFILE* output = u_finit(stdout, NULL, NULL);
  UChar c;
  while (true) {
	c = u_fgetc(input);
	if (c == U_EOF) {
	  break;
	}
	if (u_isUAlphabetic(c)) {
	  u_fputc('C', output);
	} else {
	  u_fputc('X', output);
	}
	u_fputc(' ', output);
	u_fputc(c, output);
	u_fputc('\n', output);
  }
  return 0;
}
