-[TSURangeList .cxx_destruct]
void __cdecl -[TSURangeList .cxx_destruct](TSURangeList *self, SEL a2)
{
  _NSRange *begin; // x0

  begin = self->mRangeList.__begin_;
  if ( begin )
  {
    self->mRangeList.__end_ = begin;
    operator delete(begin);
  }
}