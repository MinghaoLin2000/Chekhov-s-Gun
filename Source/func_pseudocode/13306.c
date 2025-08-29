-[TSURangeList addRange:]
void __cdecl -[TSURangeList addRange:](TSURangeList *self, SEL a2, _NSRange a3)
{
  NSUInteger length; // x21
  NSUInteger location; // x22
  __compressed_pair<_NSRange *, std::allocator<_NSRange>> *p_end_cap; // x8
  _NSRange *value; // x10
  _NSRange *end; // x9
  _NSRange *v9; // x21
  vector<_NSRange, std::allocator<_NSRange>> *p_mRangeList; // x20
  _NSRange *begin; // x0
  __int64 v12; // x23
  unsigned __int64 v13; // x11
  __int64 v14; // x10
  __int64 v15; // x1
  __int64 v16; // x8
  _NSRange *v17; // x10
  _NSRange *v18; // x8

  length = a3.length;
  location = a3.location;
  p_end_cap = &self->mRangeList.__end_cap_;
  value = self->mRangeList.__end_cap_.__value_;
  end = self->mRangeList.__end_;
  if ( end >= value )
  {
    p_mRangeList = &self->mRangeList;
    begin = self->mRangeList.__begin_;
    v12 = end - begin;
    v13 = v12 + 1;
    if ( (unsigned __int64)(v12 + 1) >> 60 )
      sub_100097888(&p_end_cap[-2]);
    v14 = (char *)value - (char *)begin;
    if ( v14 >> 3 > v13 )
      v13 = v14 >> 3;
    if ( (unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF0LL )
      v15 = 0xFFFFFFFFFFFFFFFLL;
    else
      v15 = v13;
    if ( v15 )
    {
      v16 = sub_10009A208(p_end_cap);
      begin = self->mRangeList.__begin_;
      end = self->mRangeList.__end_;
    }
    else
    {
      v16 = 0LL;
    }
    v17 = (_NSRange *)(v16 + 16 * v12);
    v18 = (_NSRange *)(v16 + 16 * v15);
    v17->location = location;
    v17->length = length;
    v9 = v17 + 1;
    if ( end != begin )
    {
      do
      {
        v17[-1] = end[-1];
        --v17;
        --end;
      }
      while ( end != begin );
      begin = p_mRangeList->__begin_;
    }
    self->mRangeList.__begin_ = v17;
    self->mRangeList.__end_ = v9;
    self->mRangeList.__end_cap_.__value_ = v18;
    if ( begin )
      operator delete(begin);
  }
  else
  {
    *end = a3;
    v9 = end + 1;
  }
  self->mRangeList.__end_ = v9;
}