+[TSURangeList stringValueForRangeVector:]
id __cdecl +[TSURangeList stringValueForRangeVector:](id a1, SEL a2, const void *a3)
{
  NSMutableString *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x22
  unsigned __int64 v7; // x23

  v4 = +[NSMutableString stringWithString:](&OBJC_CLASS___NSMutableString, "stringWithString:", CFSTR("["));
  v5 = *(_QWORD *)a3;
  if ( *((_QWORD *)a3 + 1) != *(_QWORD *)a3 )
  {
    v6 = 0LL;
    v7 = 0LL;
    do
    {
      if ( v7 )
      {
        -[NSMutableString appendString:](v4, "appendString:", CFSTR(","));
        v5 = *(_QWORD *)a3;
      }
      -[NSMutableString appendString:](v4, "appendString:", NSStringFromRange(*(NSRange *)(v5 + v6)));
      ++v7;
      v5 = *(_QWORD *)a3;
      v6 += 16LL;
    }
    while ( v7 < (__int64)(*((_QWORD *)a3 + 1) - *(_QWORD *)a3) >> 4 );
  }
  -[NSMutableString appendString:](v4, "appendString:", CFSTR("]"));
  return v4;
}