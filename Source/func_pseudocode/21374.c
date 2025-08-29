-[_TtC22localspeechrecognition32EARSpeechRecognitionResultStream .cxx_destruct]
void __cdecl -[EARSpeechRecognitionResultStream .cxx_destruct](
        _TtC22localspeechrecognition32EARSpeechRecognitionResultStream *self,
        SEL a2)
{
  __int64 v3; // x1
  char *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition32EARSpeechRecognitionResultStream_connection));
  swift_unknownObjectRelease(*(Class *)((char *)&self->super.isa
                                      + OBJC_IVAR____TtC22localspeechrecognition32EARSpeechRecognitionResultStream_resultStreamProxy));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition32EARSpeechRecognitionResultStream_modelContextDelegateInterface));
  v4 = (char *)self + OBJC_IVAR____TtC22localspeechrecognition32EARSpeechRecognitionResultStream_asrID;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  sub_100004D28(v4, v3);
}