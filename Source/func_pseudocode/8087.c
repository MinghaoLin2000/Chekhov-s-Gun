-[SignpostCounter updateMxSignpostOverlapStatistics:]
void __cdecl -[SignpostCounter updateMxSignpostOverlapStatistics:](SignpostCounter *self, SEL a2, id a3)
{
  id v4; // x20
  double prevMxSignpostStartMs; // d8
  double v6; // d0
  double v7; // d0
  double prevMxSignpostEndMs; // d8
  double v9; // d0
  double v10; // d8
  double v11; // d0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  ++self->mxSignpostIntervalCounts;
  prevMxSignpostStartMs = self->prevMxSignpostStartMs;
  objc_msgSend(v4, "startMs");
  if ( prevMxSignpostStartMs <= v6 )
  {
    prevMxSignpostEndMs = self->prevMxSignpostEndMs;
    objc_msgSend(v4, "startMs");
    if ( prevMxSignpostEndMs > v9 )
      ++self->mxSignpostIntervalOverlaps;
    v10 = self->prevMxSignpostEndMs;
    objc_msgSend(v4, "endMs");
    if ( v10 >= v7 )
      v7 = v10;
  }
  else
  {
    objc_msgSend(v4, "endMs");
  }
  self->prevMxSignpostEndMs = v7;
  objc_msgSend(v4, "startMs");
  self->prevMxSignpostStartMs = v11;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}