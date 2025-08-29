-[_TtC22localspeechrecognition19EARSpeechRecognizer setExtraLmList:sandboxExtensions:]
void __cdecl -[EARSpeechRecognizer setExtraLmList:sandboxExtensions:](
        _TtC22localspeechrecognition19EARSpeechRecognizer *self,
        SEL a2,
        id a3,
        id a4)
{
  __int64 v6; // x22
  __int64 v7; // x19
  _TtC22localspeechrecognition19EARSpeechRecognizer *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = sub_100041260(a3, &type metadata for String);
  v7 = sub_100041260(a4, &type metadata for String);
  v8 = objc_retain(self);
  sub_10001E93C(v6, v7);
  objc_release(v8);
  swift_bridgeObjectRelease(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v7);
}