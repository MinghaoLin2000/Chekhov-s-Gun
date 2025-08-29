-[_TtC22localspeechrecognition19EARSpeechRecognizer .cxx_destruct]
void __cdecl -[EARSpeechRecognizer .cxx_destruct](_TtC22localspeechrecognition19EARSpeechRecognizer *self, SEL a2)
{
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_recognizer));
  swift_unknownObjectRelease(*(Class *)((char *)&self->super.isa
                                      + OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_transaction));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_resultStream));
  swift_bridgeObjectRelease(*(Class *)((char *)&self->super.isa
                                     + OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_audioBufferListeners));
  swift_release(*(Class *)((char *)&self->super.isa
                         + OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_audioBufferListenerLock));
  objc_release(*(id *)((char *)&self->super.isa + OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_assets));
  sub_100016B08(v3);
  swift_bridgeObjectRelease(*(Class *)((char *)&self->super.isa
                                     + OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_sandboxExtensionHandles));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_userSpeechProfiles));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_modelContextDelegateInterface));
  sub_100005A38(
    (char *)self + OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_speechProfileLastModifiedDate,
    &unk_100064190);
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_supportedFeatures));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_clientInfo));
  sub_100016B08(v4);
  v5 = *(_QWORD *)&self->recognizer[OBJC_IVAR____TtC22localspeechrecognition19EARSpeechRecognizer_geoLMRegionID];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v5);
}