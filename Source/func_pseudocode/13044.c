-[NSIndexSet tsu_indexSetChunkIndex:ofChunkCount:]
id __cdecl -[NSIndexSet tsu_indexSetChunkIndex:ofChunkCount:](
        NSIndexSet *self,
        SEL a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  NSUInteger v7; // x22
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x8
  bool v11; // cf
  unsigned __int64 v12; // x8
  __int64 v13; // x3
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = -[NSIndexSet firstIndex](self, "firstIndex");
  v8 = -[NSIndexSet lastIndex](self, "lastIndex") - v7 + 1;
  if ( v8 % a4 )
    v9 = a4 - v8 % a4;
  else
    v9 = 0LL;
  v10 = v8 + v9;
  v11 = v10 >= a4;
  v12 = v10 / a4;
  if ( v11 )
    v13 = v12;
  else
    v13 = 1LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[NSIndexSet tsu_indexSetByIntersectingWithRange:](self, "tsu_indexSetByIntersectingWithRange:", v7 + v13 * a3);
}