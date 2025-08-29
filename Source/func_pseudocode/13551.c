-[NSString tsu_numberOfKeysInKeyPath]
unsigned __int64 __cdecl -[NSString tsu_numberOfKeysInKeyPath](NSString *self, SEL a2)
{
  NSUInteger v3; // x21
  char *v4; // x4
  unsigned __int64 v5; // x20
  NSUInteger v6; // x5
  char *v7; // x0
  __int64 v8; // x1

  v3 = -[NSString length](self, "length");
  v4 = 0LL;
  v5 = 0LL;
  v6 = v3;
  do
  {
    v7 = (char *)-[NSString rangeOfString:options:range:](self, "rangeOfString:options:range:", CFSTR("."), 2LL, v4, v6);
    ++v5;
    v4 = &v7[v8];
    v6 = v3 - (_QWORD)&v7[v8];
  }
  while ( &v7[v8] != (char *)0x7FFFFFFFFFFFFFFFLL );
  return v5;
}