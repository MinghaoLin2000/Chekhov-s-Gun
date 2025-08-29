-[_EARSpeechRecognizer initWithConfiguration:overrides:overrideConfigFiles:language:activeConfiguration:modelLoadingOptions:enableSpeakerCodeTraining:supportEmojiRecognition:modelContextDelegate:enableItn:]
_EARSpeechRecognizer *__cdecl -[_EARSpeechRecognizer initWithConfiguration:overrides:overrideConfigFiles:language:activeConfiguration:modelLoadingOptions:enableSpeakerCodeTraining:supportEmojiRecognition:modelContextDelegate:enableItn:](
        _EARSpeechRecognizer *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8,
        bool a9,
        bool a10,
        id a11,
        bool a12)
{
  __int64 v13; // [xsp+0h] [xbp-20h]
  __int64 v14; // [xsp+18h] [xbp-8h]

  LOBYTE(v14) = a12;
  LOWORD(v13) = __PAIR16__(a10, a9);
  return -[_EARSpeechRecognizer initWithConfiguration:overrides:overrideConfigFiles:language:activeConfiguration:modelLoadingOptions:enableSpeakerCodeTraining:supportEmojiRecognition:voiceCommandActiveSet:modelContextDelegate:enableItn:](
           self,
           "initWithConfiguration:overrides:overrideConfigFiles:language:activeConfiguration:modelLoadingOptions:enableSp"
           "eakerCodeTraining:supportEmojiRecognition:voiceCommandActiveSet:modelContextDelegate:enableItn:",
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           v13,
           0LL,
           a11,
           v14);
}