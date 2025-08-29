-[NSIndexSet tsu_boundingRange]
// local variable allocation has failed, the output may be wrong!
_NSRange __cdecl -[NSIndexSet tsu_boundingRange](NSIndexSet *self, SEL a2)
{
  NSUInteger v3; // x19
  NSUInteger v4; // x21
  NSUInteger v5; // x1
  NSUInteger v6; // x0
  _NSRange result; // 0:x0.16

  if ( -[NSIndexSet count](self, "count") )
  {
    v3 = -[NSIndexSet firstIndex](self, "firstIndex");
    v4 = -[NSIndexSet lastIndex](self, "lastIndex");
    v5 = v4 - -[NSIndexSet firstIndex](self, "firstIndex") + 1;
  }
  else
  {
    v3 = 0x7FFFFFFFFFFFFFFFLL;
    v5 = 0LL;
  }
  v6 = v3;
  result.length = v5;
  result.location = v6;
  return result;
}