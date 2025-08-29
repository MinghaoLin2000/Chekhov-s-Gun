-[_TtC22localspeechrecognition32EARSpeechRecognitionResultStream speechRecognizer:didReportStatus:statusContext:]
void __cdecl -[EARSpeechRecognitionResultStream speechRecognizer:didReportStatus:statusContext:](
        _TtC22localspeechrecognition32EARSpeechRecognitionResultStream *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5)
{
  _TtC22localspeechrecognition19EARSpeechRecognizer *v7; // x21
  id v8; // x22
  _TtC22localspeechrecognition32EARSpeechRecognitionResultStream *v9; // x20
  const char *v10; // x1
  void *v11; // x2
  void *v12; // x3
  void *v13; // x4
  void *v14; // x5
  void *v15; // x6
  void *v16; // x7
  __int64 vars8; // [xsp+28h] [xbp+8h]
  void *v18; // [xsp+30h] [xbp+10h]
  void *v19; // [xsp+38h] [xbp+18h]

  if ( a5 )
    v7 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)sub_100041120(
                                                                a5,
                                                                &type metadata for AnyHashable,
                                                                (char *)&type metadata for Any + 8,
                                                                &protocol witness table for AnyHashable);
  else
    v7 = 0LL;
  v8 = objc_retain(a3);
  v9 = objc_retain(self);
  sub_100029060();
  objc_release(v8);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v7, v10, v11, v12, v13, v14, v15, v16, v18, v19);
}