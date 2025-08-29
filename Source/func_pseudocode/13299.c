-[TSURangeList initWithRange:]
TSURangeList *__cdecl -[TSURangeList initWithRange:](TSURangeList *self, SEL a2, _NSRange a3)
{
  NSUInteger length; // x19
  NSUInteger location; // x20
  TSURangeList *v5; // x0
  TSURangeList *v6; // x21
  _NSRange *begin; // x8

  length = a3.length;
  location = a3.location;
  v5 = -[TSURangeList init](self, "init");
  v6 = v5;
  if ( v5 )
  {
    sub_100151074(&v5->mRangeList, 1LL);
    begin = v6->mRangeList.__begin_;
    begin->location = location;
    begin->length = length;
  }
  return v6;
}