-[TSURangeList initWithRangeList:]
TSURangeList *__cdecl -[TSURangeList initWithRangeList:](TSURangeList *self, SEL a2, id a3)
{
  TSURangeList *v4; // x0
  TSURangeList *v5; // x20
  vector<_NSRange, std::allocator<_NSRange>> *p_mRangeList; // x21
  __int64 v7; // x23
  unsigned __int64 v8; // x22
  void *v9; // x0
  _NSRange *v10; // x8
  NSUInteger v11; // x1

  v4 = -[TSURangeList init](self, "init");
  v5 = v4;
  if ( v4 )
  {
    p_mRangeList = &v4->mRangeList;
    sub_100151074(&v4->mRangeList, objc_msgSend(a3, "count"));
    if ( objc_msgSend(a3, "count") )
    {
      v7 = 0LL;
      v8 = 0LL;
      do
      {
        v9 = objc_msgSend(a3, "rangeAtIndex:", v8);
        v10 = &p_mRangeList->__begin_[v7];
        v10->location = (NSUInteger)v9;
        v10->length = v11;
        ++v8;
        ++v7;
      }
      while ( v8 < (unsigned __int64)objc_msgSend(a3, "count") );
    }
  }
  return v5;
}