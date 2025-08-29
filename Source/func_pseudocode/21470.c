+[LSRUtilities emptyResultWithIsFinal:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[LSRUtilities emptyResultWithIsFinal:](id a1, SEL a2, bool a3)
{
  _BOOL8 v3; // x19
  void *v4; // x20
  NSArray *v5; // x21
  id v6; // x22
  void *v7; // x19
  void *v9; // [xsp+0h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = a3;
  v4 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS____EARSpeechRecognitionToken),
         "initWithTokenName:start:end:silenceStart:confidence:hasSpaceAfter:hasSpaceBefore:phoneSequence:ipaPhoneSequence:",
         &stru_10005A368,
         0LL,
         0LL,
         &stru_10005A368,
         &stru_10005A368,
         0.0,
         0.0,
         0.0,
         0.0);
  v9 = v4;
  v5 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v9, 1LL));
  v6 = objc_retainAutoreleasedReturnValue(+[LSRUtilities transcriptionsWithEARTokens:](&OBJC_CLASS___LSRUtilities, "transcriptionsWithEARTokens:", v5));
  v7 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___SFSpeechRecognitionResult),
         "_initWithBestTranscription:rawTranscription:final:speechRecognitionMetadata:",
         v6,
         v6,
         v3,
         0LL);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}