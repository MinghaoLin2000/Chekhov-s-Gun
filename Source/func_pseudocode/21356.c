-[_TtC22localspeechrecognition19EARSpeechRecognizer requestEagerResult:]
void __cdecl -[EARSpeechRecognizer requestEagerResult:](
        _TtC22localspeechrecognition19EARSpeechRecognizer *self,
        SEL a2,
        id a3)
{
  __int64 v5; // x0
  _TtC22localspeechrecognition19EARSpeechRecognizer *v6; // x19
  _TtC22localspeechrecognition19EARSpeechRecognizer *v7; // x20
  const char *v8; // x1
  void *v9; // x2
  void *v10; // x3
  void *v11; // x4
  void *v12; // x5
  void *v13; // x6
  void *v14; // x7
  __int64 vars8; // [xsp+18h] [xbp+8h]
  void *v16; // [xsp+20h] [xbp+10h]
  void *v17; // [xsp+28h] [xbp+18h]

  v5 = sub_10000A0B0(0LL, &unk_100063240, &OBJC_CLASS___NSNumber_ptr);
  v6 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)sub_100041260(a3, v5);
  v7 = objc_retain(self);
  sub_10001FD50(v6);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v6, v8, v9, v10, v11, v12, v13, v14, v16, v17);
}