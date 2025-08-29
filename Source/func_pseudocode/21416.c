$s22localspeechrecognition10ClientInfoV11LoggingInfoVwxx
void __fastcall destroy for ClientInfo.LoggingInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  void (__fastcall *v5)(__int64, __int64); // x22
  const char *v6; // x1
  void *v7; // x2
  void *v8; // x3
  void *v9; // x4
  void *v10; // x5
  void *v11; // x6
  void *v12; // x7
  _TtC22localspeechrecognition19EARSpeechRecognizer *v13; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = sub_100040F10(0LL);
  v5 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v4 - 8) + 8LL);
  v5(a1, v4);
  v5(a1 + *(int *)(a2 + 20), v4);
  v13 = *(_TtC22localspeechrecognition19EARSpeechRecognizer **)(a1 + *(int *)(a2 + 24) + 8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v13, v6, v7, v8, v9, v10, v11, v12);
}