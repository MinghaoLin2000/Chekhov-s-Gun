-[NSIndexSet tsu_isSingleContiguousRange]
bool __cdecl -[NSIndexSet tsu_isSingleContiguousRange](NSIndexSet *self, SEL a2)
{
  NSUInteger v3; // x0
  NSUInteger v4; // x20
  __int64 v5; // x20

  v3 = -[NSIndexSet count](self, "count");
  if ( v3 )
  {
    v4 = -[NSIndexSet lastIndex](self, "lastIndex");
    v5 = v4 - -[NSIndexSet firstIndex](self, "firstIndex") + 1;
    LOBYTE(v3) = v5 == -[NSIndexSet count](self, "count");
  }
  return v3;
}