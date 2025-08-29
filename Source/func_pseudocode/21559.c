+[LSRConnection initialize]
void __cdecl +[LSRConnection initialize](id a1, SEL a2)
{
  dispatch_queue_attr_s *v2; // x19
  dispatch_queue_t v3; // x0
  void *v4; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (id)objc_opt_class(&OBJC_CLASS___LSRConnection, a2) == a1 )
  {
    v2 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v3 = dispatch_queue_create("com.apple.speech.localspeechrecognition", v2);
    v4 = (void *)qword_100065418;
    qword_100065418 = (__int64)v3;
    objc_release(v4);
    objc_release(v2);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    SFLogInitIfNeeded();
  }
}