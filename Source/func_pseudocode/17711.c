-[ModelKeyServerAPIFetchKeyRequest dictionaryRepresentation]
id __cdecl -[ModelKeyServerAPIFetchKeyRequest dictionaryRepresentation](ModelKeyServerAPIFetchKeyRequest *self, SEL a2)
{
  void *v3; // x0
  void *v4; // x19
  NSString *keyId; // x2
  NSString *teamId; // x2
  NSData *signedKeyRequest; // x2
  NSNumber *v8; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v4 = v3;
  keyId = self->_keyId;
  if ( keyId )
    objc_msgSend(v3, "setObject:forKey:", keyId, CFSTR("key_id"));
  teamId = self->_teamId;
  if ( teamId )
    objc_msgSend(v4, "setObject:forKey:", teamId, CFSTR("team_id"));
  signedKeyRequest = self->_signedKeyRequest;
  if ( signedKeyRequest )
    objc_msgSend(v4, "setObject:forKey:", signedKeyRequest, CFSTR("signed_key_request"));
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
  {
    v8 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", self->_rawRequest));
    objc_msgSend(v4, "setObject:forKey:", v8, CFSTR("raw_request"));
    objc_release(v8);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}