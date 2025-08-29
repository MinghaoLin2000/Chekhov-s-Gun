-[TSURangeList initWithRangeVectorMove:]
TSURangeList *__cdecl -[TSURangeList initWithRangeVectorMove:](TSURangeList *self, SEL a2, void *a3)
{
  TSURangeList *v4; // x0
  TSURangeList *v5; // x19
  int v6; // w0

  v4 = -[TSURangeList init](self, "init");
  v5 = v4;
  if ( v4 )
  {
    v6 = (_DWORD)v4 + 8;
    if ( &v5->mRangeList != a3 )
      sub_100151AC0(v6, *(void **)a3);
  }
  return v5;
}