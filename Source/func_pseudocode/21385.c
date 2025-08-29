-[_TtC22localspeechrecognition32EARSpeechRecognitionResultStream speechRecognizer:didRecognizeFinalResults:]
void __cdecl -[EARSpeechRecognitionResultStream speechRecognizer:didRecognizeFinalResults:](
        _TtC22localspeechrecognition32EARSpeechRecognitionResultStream *self,
        SEL a2,
        id a3,
        id a4)
{
  __int64 v5; // x0
  _TtC22localspeechrecognition19EARSpeechRecognizer *v6; // x0
  const char *v7; // x1
  void *v8; // x2
  void *v9; // x3
  void *v10; // x4
  void *v11; // x5
  void *v12; // x6
  void *v13; // x7
  __int64 vars8; // [xsp+18h] [xbp+8h]
  void *v15; // [xsp+20h] [xbp+10h]
  void *v16; // [xsp+28h] [xbp+18h]

  v5 = sub_10000A0B0(0LL, &unk_1000642C8, &OBJC_CLASS____EARSpeechRecognitionResult_ptr);
  v6 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)sub_100041260(a4, v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v6, v7, v8, v9, v10, v11, v12, v13, v15, v16);
}