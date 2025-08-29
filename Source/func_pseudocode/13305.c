-[TSURangeList count]
unsigned __int64 __cdecl -[TSURangeList count](TSURangeList *self, SEL a2)
{
  return self->mRangeList.__end_ - self->mRangeList.__begin_;
}