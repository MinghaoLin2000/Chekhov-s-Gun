_$s22localspeechrecognition14SignpostHelperCfD
__int64 SignpostHelper.__deallocating_deinit()
{
  __int64 v0; // x20
  __int64 v1; // x19
  __int64 v2; // x0
  __int64 v3; // x16
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = v0 + OBJC_IVAR____TtC22localspeechrecognition14SignpostHelper_signposter;
  v2 = sub_100041040(0LL);
  sub_1000079E0(v2);
  (*(void (__fastcall **)(__int64))(v3 + 8))(v1);
  v4 = *(unsigned int *)(*(_QWORD *)v0 + 48LL);
  v5 = *(unsigned __int16 *)(*(_QWORD *)v0 + 52LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _swift_deallocClassInstance(v0, v4, v5);
}