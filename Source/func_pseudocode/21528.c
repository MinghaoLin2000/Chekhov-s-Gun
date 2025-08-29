-[LSRConnection cleanupCacheWithCompletion:]
void __cdecl -[LSRConnection cleanupCacheWithCompletion:](LSRConnection *self, SEL a2, id a3)
{
  id v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retain(a3);
  if ( qword_100065470
    && (unsigned int)objc_msgSend((id)qword_100065470, "isEqualToString:", kSFSpeechRecognizerTaskCaptioning) )
  {
    +[LSRConnection _cachedRecognizerCleanUp](&OBJC_CLASS___LSRConnection, "_cachedRecognizerCleanUp");
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}