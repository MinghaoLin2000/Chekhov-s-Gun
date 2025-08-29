-[ModelKeyServerAPIResultError dictionaryRepresentation]
id __cdecl -[ModelKeyServerAPIResultError dictionaryRepresentation](ModelKeyServerAPIResultError *self, SEL a2)
{
  void *v3; // x0
  void *v4; // x19
  NSString *message; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v4 = v3;
  message = self->_message;
  if ( message )
    objc_msgSend(v3, "setObject:forKey:", message, CFSTR("message"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}