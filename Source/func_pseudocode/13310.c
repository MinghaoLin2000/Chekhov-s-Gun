-[TSURangeList reverse]
void __cdecl -[TSURangeList reverse](TSURangeList *self, SEL a2)
{
  _NSRange *begin; // x9
  _NSRange *end; // x10
  _NSRange *v4; // x8
  _NSRange *v6; // x9
  _NSRange v7; // q0

  begin = self->mRangeList.__begin_;
  end = self->mRangeList.__end_;
  v4 = end - 1;
  if ( begin != end && v4 > begin )
  {
    v6 = begin + 1;
    do
    {
      v7 = v6[-1];
      v6[-1] = *v4;
      *v4-- = v7;
    }
    while ( v6++ < v4 );
  }
}