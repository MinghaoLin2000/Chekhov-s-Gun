-[_TtC22localspeechrecognition32EARSpeechRecognitionResultStream speechRecognizer:didProduceEndpointFeaturesWithWordCount:trailingSilenceDuration:eosLikelihood:pauseCounts:silencePosterior:processedAudioDurationInMilliseconds:acousticEndpointerScore:]
void __cdecl -[EARSpeechRecognitionResultStream speechRecognizer:didProduceEndpointFeaturesWithWordCount:trailingSilenceDuration:eosLikelihood:pauseCounts:silencePosterior:processedAudioDurationInMilliseconds:acousticEndpointerScore:](
        _TtC22localspeechrecognition32EARSpeechRecognitionResultStream *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        signed __int64 a5,
        double a6,
        id a7,
        double a8,
        signed __int64 a9,
        double a10)
{
  __int64 v16; // x0
  _TtC22localspeechrecognition19EARSpeechRecognizer *v17; // x25
  id v18; // x23
  _TtC22localspeechrecognition32EARSpeechRecognitionResultStream *v19; // x20
  const char *v20; // x1
  void *v21; // x2
  void *v22; // x3
  void *v23; // x4
  void *v24; // x5
  void *v25; // x6
  void *v26; // x7
  __int64 vars8; // [xsp+68h] [xbp+8h]
  void *v28; // [xsp+70h] [xbp+10h]
  void *v29; // [xsp+78h] [xbp+18h]

  v16 = sub_10000A0B0(0LL, &unk_100063240, &OBJC_CLASS___NSNumber_ptr);
  v17 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)sub_100041260(a7, v16);
  v18 = objc_retain(a3);
  v19 = objc_retain(self);
  sub_100028EA8(a6, a8, a10);
  objc_release(v18);
  objc_release(v19);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v17, v20, v21, v22, v23, v24, v25, v26, v28, v29);
}