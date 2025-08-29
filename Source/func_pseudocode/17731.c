-[ModelKeyServerAPIRawKey dictionaryRepresentation]
id __cdecl -[ModelKeyServerAPIRawKey dictionaryRepresentation](ModelKeyServerAPIRawKey *self, SEL a2)
{
  void *v3; // x0
  void *v4; // x19
  NSData *encryptionKey; // x2
  NSData *encryptionIv; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v4 = v3;
  encryptionKey = self->_encryptionKey;
  if ( encryptionKey )
    objc_msgSend(v3, "setObject:forKey:", encryptionKey, CFSTR("encryption_key"));
  encryptionIv = self->_encryptionIv;
  if ( encryptionIv )
    objc_msgSend(v4, "setObject:forKey:", encryptionIv, CFSTR("encryption_iv"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}