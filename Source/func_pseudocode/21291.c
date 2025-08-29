_$s22localspeechrecognition17SelfLoggingHelperCfD
__int64 SelfLoggingHelper.__deallocating_deinit()
{
  __int64 v0; // x20
  __int64 vars8; // [xsp+8h] [xbp+8h]

  swift_unknownObjectRelease(*(_QWORD *)(v0 + 16));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _swift_deallocClassInstance(v0, 24LL, 7LL);
}