-[_TtC22localspeechrecognition32EARSpeechRecognitionResultStream speechRecognizer:didProcessAudioDuration:]
void __cdecl -[EARSpeechRecognitionResultStream speechRecognizer:didProcessAudioDuration:](
        _TtC22localspeechrecognition32EARSpeechRecognitionResultStream *self,
        SEL a2,
        id a3,
        double a4)
{
  id v6; // x21
  _TtC22localspeechrecognition32EARSpeechRecognitionResultStream *v7; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(self);
  sub_100028E20(a4);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}