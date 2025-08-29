-[_TtC22localspeechrecognition31AssistantAssetDelegateInterface .cxx_destruct]
void __cdecl -[AssistantAssetDelegateInterface .cxx_destruct](
        _TtC22localspeechrecognition31AssistantAssetDelegateInterface *self,
        SEL a2)
{
  const char *v3; // x1
  void *v4; // x2
  void *v5; // x3
  void *v6; // x4
  void *v7; // x5
  void *v8; // x6
  void *v9; // x7
  _TtC22localspeechrecognition19EARSpeechRecognizer *v10; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC22localspeechrecognition31AssistantAssetDelegateInterface_assetManager));
  v10 = *(_TtC22localspeechrecognition19EARSpeechRecognizer **)((char *)&self->super.isa
                                                              + OBJC_IVAR____TtC22localspeechrecognition31AssistantAssetDelegateInterface_statusForLanguage);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v10, v3, v4, v5, v6, v7, v8, v9);
}