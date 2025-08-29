_$s22localspeechrecognition10ClientInfoV07LoggingC0V23__derived_struct_equalsySbAE_AEtFZ
__int64 __fastcall static ClientInfo.LoggingInfo.__derived_struct_equals(_:_:)(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x1
  _QWORD *v8; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (((__int64 (*)(void))sub_100040EF0)() & 1) == 0 )
    return 0LL;
  v4 = type metadata accessor for ClientInfo.LoggingInfo(0LL);
  if ( (sub_100040EF0(a1 + *(int *)(v4 + 20), a2 + *(int *)(v4 + 20)) & 1) == 0 )
    return 0LL;
  v5 = *(int *)(v4 + 24);
  v6 = *(_QWORD *)(a1 + v5);
  v7 = *(_QWORD *)(a1 + v5 + 8);
  v8 = (_QWORD *)(a2 + v5);
  if ( v6 == *v8 && v7 == v8[1] )
    return 1LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100041720();
}