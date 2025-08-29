-[SignpostCounter init]
SignpostCounter *__cdecl -[SignpostCounter init](SignpostCounter *self, SEL a2)
{
  SignpostCounter *result; // x0
  objc_super v8; // [xsp+0h] [xbp-10h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___SignpostCounter;
  result = -[SignpostCounter init](&v8, "init");
  if ( result )
  {
    result->count = 0LL;
    result->mxSignpostIntervalCounts = 0LL;
    result->mxSignpostIntervalOverlaps = 0LL;
    __asm { FMOV            V0.2D, #-1.0 }
    *(_OWORD *)&result->prevMxSignpostStartMs = _Q0;
  }
  return result;
}