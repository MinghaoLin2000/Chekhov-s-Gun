-[NSString tsu_range]
// local variable allocation has failed, the output may be wrong!
_NSRange __cdecl -[NSString tsu_range](NSString *self, SEL a2)
{
  NSUInteger v2; // x1
  NSUInteger v3; // x0
  _NSRange result; // 0:x0.16

  v2 = -[NSString length](self, "length");
  v3 = 0LL;
  result.length = v2;
  result.location = v3;
  return result;
}