-[TSURangeList rangeAtIndex:]
// local variable allocation has failed, the output may be wrong!
_NSRange __cdecl -[TSURangeList rangeAtIndex:](TSURangeList *self, SEL a2, unsigned __int64 a3)
{
  _NSRange *begin; // x9
  unsigned __int64 v4; // x8
  NSUInteger *p_location; // x8
  NSUInteger v6; // x0
  NSUInteger v7; // x1
  _NSRange result; // 0:x0.16

  begin = self->mRangeList.__begin_;
  v4 = self->mRangeList.__end_ - begin;
  if ( v4 <= a3 )
    objc_exception_throw(
      +[NSException exceptionWithName:reason:userInfo:](
        &OBJC_CLASS___NSException,
        "exceptionWithName:reason:userInfo:",
        CFSTR("IndexOutOfBound"),
        +[NSString stringWithFormat:](
          &OBJC_CLASS___NSString,
          "stringWithFormat:",
          CFSTR("Getting object at %lu from an array with size %lu"),
          a3,
          v4),
        0LL));
  p_location = &begin[a3].location;
  v6 = *p_location;
  v7 = p_location[1];
  result.length = v7;
  result.location = v6;
  return result;
}