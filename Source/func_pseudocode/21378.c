-[_TtC22localspeechrecognition32EARSpeechRecognitionResultStream speechRecognizer:didRecognizeVoiceCommandCandidatePackage:]
void __cdecl -[EARSpeechRecognitionResultStream speechRecognizer:didRecognizeVoiceCommandCandidatePackage:](
        _TtC22localspeechrecognition32EARSpeechRecognitionResultStream *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x19
  _TtC22localspeechrecognition32EARSpeechRecognitionResultStream *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retain(self);
  sub_100028B4C();
  objc_release(v6);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}