-[LSRLanguageModel addSentenceToNgramCounts:]
void __cdecl -[LSRLanguageModel addSentenceToNgramCounts:](LSRLanguageModel *self, SEL a2, id a3)
{
  id v4; // x21
  NSUUID *v5; // x20
  NSString *v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v5, "UUIDString"));
  objc_release(v5);
  -[_EARAppLmData addSentenceWithType:uuid:content:](self->_appLmData, "addSentenceWithType:uuid:content:", 0LL, v6, v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}