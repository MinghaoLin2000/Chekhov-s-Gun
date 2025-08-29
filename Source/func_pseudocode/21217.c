_$s22localspeechrecognition15InstrumentationCfD
__int64 Instrumentation.__deallocating_deinit()
{
  __int64 v0; // x20
  __int64 vars8; // [xsp+8h] [xbp+8h]

  Instrumentation.deinit();
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _swift_deallocClassInstance(v0, 56LL, 7LL);
}