-[TSUMutableLinkedPointerSet countByEnumeratingWithState:objects:count:]
unsigned __int64 __cdecl -[TSUMutableLinkedPointerSet countByEnumeratingWithState:objects:count:](
        TSUMutableLinkedPointerSet *self,
        SEL a2,
        $655AB7B2D2422B1B18367FB7F2D120EF *a3,
        id *a4,
        unsigned __int64 a5)
{
  unsigned __int64 var0; // x8
  TSULinkedPointerSetEntry **p_mHead; // x9
  TSULinkedPointerSetEntry *v7; // x9
  unsigned __int64 result; // x0
  bool v9; // zf
  bool v10; // cf

  var0 = a3->var0;
  p_mHead = &self->mHead;
  if ( a3->var0 )
    p_mHead = (TSULinkedPointerSetEntry **)(a3->var0 + 24);
  v7 = *p_mHead;
  result = 0LL;
  if ( v7 )
    v9 = a5 == 0;
  else
    v9 = 1;
  if ( !v9 )
  {
    do
    {
      var0 = (unsigned __int64)v7;
      a4[result++] = v7->mObject;
      v7 = v7->mNext;
      if ( v7 )
        v10 = result >= a5;
      else
        v10 = 1;
    }
    while ( !v10 );
  }
  a3->var0 = var0;
  a3->var1 = a4;
  a3->var2 = (unsigned __int64 *)&a3->var2;
  return result;
}