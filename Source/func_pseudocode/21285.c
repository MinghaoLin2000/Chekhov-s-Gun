-[_TtC22localspeechrecognition31EARLanguageDetectorResultStream .cxx_destruct]
void __cdecl -[EARLanguageDetectorResultStream .cxx_destruct](
        _TtC22localspeechrecognition31EARLanguageDetectorResultStream *self,
        SEL a2)
{
  __int64 v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition31EARLanguageDetectorResultStream_connection));
  v3 = *(__int64 *)((char *)&self->super.isa
                  + OBJC_IVAR____TtC22localspeechrecognition31EARLanguageDetectorResultStream_resultStreamProxy);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_unknownObjectRelease(v3);
}