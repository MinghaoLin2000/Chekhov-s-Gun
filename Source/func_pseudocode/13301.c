-[TSURangeList initWithString:]
TSURangeList *__cdecl -[TSURangeList initWithString:](TSURangeList *self, SEL a2, id a3)
{
  TSURangeList *v4; // x0
  TSURangeList *v5; // x20
  unsigned __int64 v6; // x24
  unsigned __int64 v7; // x22
  void **p_begin; // x21
  unsigned __int64 v9; // x25
  NSRange v10; // kr00_16
  _NSRange *value; // x8
  NSRange *end; // x9
  _NSRange *v13; // x25
  NSRange *begin; // x0
  __int64 v15; // x27
  unsigned __int64 v16; // x10
  __int64 v17; // x8
  __int64 v18; // x1
  __int64 v19; // x8
  NSRange *v20; // x10
  NSRange *v21; // x11

  v4 = -[TSURangeList init](self, "init");
  v5 = v4;
  if ( a3 && v4 && (unsigned __int64)objc_msgSend(a3, "length") >= 3 && objc_msgSend(a3, "length") )
  {
    v6 = 0LL;
    v7 = 0LL;
    p_begin = (void **)&v5->mRangeList.__begin_;
    do
    {
      v9 = v7;
      if ( (unsigned int)objc_msgSend(a3, "characterAtIndex:", v7) != 123 )
      {
        if ( (unsigned int)objc_msgSend(a3, "characterAtIndex:", v7) == 125 )
        {
          v10 = NSRangeFromString((NSString *)objc_msgSend(a3, "substringWithRange:", v6, v7 - v6 + 1));
          end = v5->mRangeList.__end_;
          value = v5->mRangeList.__end_cap_.__value_;
          if ( end >= value )
          {
            begin = (NSRange *)*p_begin;
            v15 = ((char *)end - (_BYTE *)*p_begin) >> 4;
            v16 = v15 + 1;
            if ( (unsigned __int64)(v15 + 1) >> 60 )
              sub_100097888(&v5->mRangeList);
            v17 = (char *)value - (char *)begin;
            if ( v17 >> 3 > v16 )
              v16 = v17 >> 3;
            if ( (unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL )
              v18 = 0xFFFFFFFFFFFFFFFLL;
            else
              v18 = v16;
            if ( v18 )
            {
              v19 = sub_10009A208(&v5->mRangeList.__end_cap_);
              begin = v5->mRangeList.__begin_;
              end = v5->mRangeList.__end_;
            }
            else
            {
              v19 = 0LL;
            }
            v20 = (NSRange *)(v19 + 16 * v15);
            *v20 = v10;
            v21 = v20;
            if ( end != begin )
            {
              do
              {
                v21[-1] = end[-1];
                --v21;
                --end;
              }
              while ( end != begin );
              begin = (NSRange *)*p_begin;
            }
            v13 = v20 + 1;
            v5->mRangeList.__begin_ = v21;
            v5->mRangeList.__end_ = v20 + 1;
            v5->mRangeList.__end_cap_.__value_ = (_NSRange *)(v19 + 16 * v18);
            if ( begin )
              operator delete(begin);
          }
          else
          {
            *end = v10;
            v13 = end + 1;
          }
          v5->mRangeList.__end_ = v13;
        }
        v9 = v6;
      }
      ++v7;
      v6 = v9;
    }
    while ( v7 < (unsigned __int64)objc_msgSend(a3, "length") );
  }
  return v5;
}