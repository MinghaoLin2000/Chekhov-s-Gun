-[_TtC22localspeechrecognition19EARLanguageDetector .cxx_destruct]
void __cdecl -[EARLanguageDetector .cxx_destruct](_TtC22localspeechrecognition19EARLanguageDetector *self, SEL a2)
{
  __int64 v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_bridgeObjectRelease(*(Class *)((char *)&self->super.isa
                                     + OBJC_IVAR____TtC22localspeechrecognition19EARLanguageDetector_audioBufferListeners));
  swift_release(*(Class *)((char *)&self->super.isa
                         + OBJC_IVAR____TtC22localspeechrecognition19EARLanguageDetector_audioBufferListenerLock));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition19EARLanguageDetector_resultStream));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition19EARLanguageDetector_assetsManager));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition19EARLanguageDetector_clientInfo));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition19EARLanguageDetector_detectorOptions));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition19EARLanguageDetector_languageDetector));
  v3 = *(__int64 *)((char *)&self->super.isa
                  + OBJC_IVAR____TtC22localspeechrecognition19EARLanguageDetector_supportedLocales);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v3);
}