-[TSURangeList replaceWithRange:atIndex:]
void __cdecl -[TSURangeList replaceWithRange:atIndex:](TSURangeList *self, SEL a2, _NSRange a3, unsigned __int64 a4)
{
  _NSRange *begin; // x9
  unsigned __int64 v5; // x8

  begin = self->mRangeList.__begin_;
  v5 = self->mRangeList.__end_ - begin;
  if ( v5 <= a4 )
    objc_exception_throw(
      +[NSException exceptionWithName:reason:userInfo:](
        &OBJC_CLASS___NSException,
        "exceptionWithName:reason:userInfo:",
        CFSTR("IndexOutOfBound"),
        +[NSString stringWithFormat:](
          &OBJC_CLASS___NSString,
          "stringWithFormat:",
          CFSTR("Getting object at %lu from an array with size %lu"),
          a3.length,
          a4,
          v5),
        0LL));
  begin[a4] = a3;
}