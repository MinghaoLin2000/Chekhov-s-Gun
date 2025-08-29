+[LSRAudioDump dumpDirectory]
id __cdecl +[LSRAudioDump dumpDirectory](id a1, SEL a2)
{
  NSString *v2; // x19
  NSString *v3; // x20
  NSURL *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(NSHomeDirectory());
  v3 = objc_retainAutoreleasedReturnValue(
         -[NSString stringByAppendingPathComponent:](
           v2,
           "stringByAppendingPathComponent:",
           CFSTR("Library/Caches/com.apple.speech.localspeechrecognition/lsr_audio_dumps")));
  objc_release(v2);
  v4 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v3));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}