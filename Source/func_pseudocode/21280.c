-[_TtC22localspeechrecognition30EARLanguageDetectorAudioBuffer endAudio]
void __cdecl -[EARLanguageDetectorAudioBuffer endAudio](
        _TtC22localspeechrecognition30EARLanguageDetectorAudioBuffer *self,
        SEL a2)
{
  _TtC22localspeechrecognition30EARLanguageDetectorAudioBuffer *v2; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  sub_1000093D8();
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}