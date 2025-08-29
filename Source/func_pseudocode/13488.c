-[NSString tsu_countInstancesOfString:options:]
unsigned __int64 __cdecl -[NSString tsu_countInstancesOfString:options:](
        NSString *self,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  id v6; // x21
  NSUInteger v7; // x22
  char *v8; // x23
  void *v9; // x0
  unsigned __int64 v10; // x24
  char *v11; // x8
  char *v12; // x25

  v6 = objc_retain(a3);
  v7 = -[NSString length](self, "length");
  v8 = (char *)objc_msgSend(v6, "length");
  v9 = -[NSString rangeOfString:options:range:](self, "rangeOfString:options:range:", v6, a4, 0LL, v7);
  v10 = 0LL;
  if ( v9 != (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v11 = 0LL;
    v10 = 0LL;
    do
    {
      ++v10;
      v12 = &v8[(_QWORD)v9];
      v7 = (NSUInteger)&v11[v7 - (unsigned __int64)&v8[(_QWORD)v9]];
      v9 = -[NSString rangeOfString:options:range:](self, "rangeOfString:options:range:", v6, a4, &v8[(_QWORD)v9], v7);
      v11 = v12;
    }
    while ( v9 != (void *)0x7FFFFFFFFFFFFFFFLL );
  }
  objc_release(v6);
  return v10;
}