-[_TtC22localspeechrecognition30EARLanguageDetectorAudioBuffer addAudioSampleData:]
void __cdecl -[EARLanguageDetectorAudioBuffer addAudioSampleData:](
        _TtC22localspeechrecognition30EARLanguageDetectorAudioBuffer *self,
        SEL a2,
        id a3)
{
  id v3; // x19
  _TtC22localspeechrecognition30EARLanguageDetectorAudioBuffer *v5; // x0
  id v6; // x22
  unsigned __int64 v7; // x1
  unsigned __int64 v8; // x21
  _TtC22localspeechrecognition30EARLanguageDetectorAudioBuffer *v9; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = a3;
  if ( a3 )
  {
    v5 = objc_retain(self);
    v6 = objc_retain(v3);
    v3 = (id)sub_100040E90(v3);
    v8 = v7;
    objc_release(v6);
  }
  else
  {
    v9 = objc_retain(self);
    v8 = 0xF000000000000000LL;
  }
  sub_100009198(v3, v8);
  sub_100009E64(v3, v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(self);
}