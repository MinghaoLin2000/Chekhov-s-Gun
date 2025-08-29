-[_TtC22localspeechrecognition31EARSpeechRecognitionAudioBuffer packetArrivalTimestampFromAudioTimestamp:reply:]
void __cdecl -[EARSpeechRecognitionAudioBuffer packetArrivalTimestampFromAudioTimestamp:reply:](
        _TtC22localspeechrecognition31EARSpeechRecognitionAudioBuffer *self,
        SEL a2,
        float a3,
        id a4)
{
  void *v6; // x20
  __int64 v7; // x21
  _TtC22localspeechrecognition31EARSpeechRecognitionAudioBuffer *v8; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = _Block_copy(a4);
  v7 = swift_allocObject(&unk_100059850, 40LL, 7LL);
  *(float *)(v7 + 16) = a3;
  *(_QWORD *)(v7 + 24) = v6;
  *(_QWORD *)(v7 + 32) = self;
  v8 = objc_retain(self);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  sub_100022078(&unk_1000640E0, v7);
}