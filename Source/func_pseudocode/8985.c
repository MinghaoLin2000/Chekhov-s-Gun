_$s34AppleMediaServicesUIDynamicService14MetricsContextV2eeoiySbAC_ACtFZ
unsigned __int64 __fastcall static MetricsContext.== infix(_:_:)(int a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // x20
  __int64 v7; // x0
  void *v8; // x21
  void *v9; // x19

  if ( ((a1 ^ a3) & 1) != 0 )
    return 0LL;
  v4 = (a2 | a4) == 0;
  if ( a2 && a4 )
  {
    sub_1000373D0(0LL);
    v7 = sub_100036C78(a2);
    v8 = (void *)sub_100037560(v7);
    v9 = (void *)sub_1000460E8(
                   a4,
                   &type metadata for String,
                   (char *)&type metadata for Any + 8,
                   &protocol witness table for String);
    v4 = (unsigned __int64)objc_msgSend(v8, "isEqualTo:", v9);
    objc_release(v8);
    objc_release(v9);
  }
  return v4;
}