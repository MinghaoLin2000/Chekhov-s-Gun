-[TSURangeList removeRangeAtIndex:]
void __cdecl -[TSURangeList removeRangeAtIndex:](TSURangeList *self, SEL a2, unsigned __int64 a3)
{
  _NSRange *begin; // x8
  _NSRange *end; // x9
  _NSRange *v6; // x20
  char *v7; // x21

  begin = self->mRangeList.__begin_;
  end = self->mRangeList.__end_;
  v6 = &begin[a3];
  v7 = (char *)((char *)end - (char *)&v6[1]);
  if ( end != &v6[1] )
    memmove(&begin[a3], &v6[1], (char *)end - (char *)&v6[1]);
  self->mRangeList.__end_ = (_NSRange *)&v7[(_QWORD)v6];
}