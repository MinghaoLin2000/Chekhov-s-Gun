-[ModelKeyServerAPIFetchKeyResult dictionaryRepresentation]
id __cdecl -[ModelKeyServerAPIFetchKeyResult dictionaryRepresentation](ModelKeyServerAPIFetchKeyResult *self, SEL a2)
{
  void *v3; // x0
  void *v4; // x19
  NSString *keyId; // x2
  NSString *modelName; // x2
  NSString *teamId; // x2
  ModelKeyServerAPISignedKey *signedKey; // x0
  id v9; // x21
  ModelKeyServerAPIRawKey *rawKey; // x0
  id v11; // x21
  __int64 key; // x8
  __CFString *v13; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v4 = v3;
  keyId = self->_keyId;
  if ( keyId )
    objc_msgSend(v3, "setObject:forKey:", keyId, CFSTR("key_id"));
  modelName = self->_modelName;
  if ( modelName )
    objc_msgSend(v4, "setObject:forKey:", modelName, CFSTR("model_name"));
  teamId = self->_teamId;
  if ( teamId )
    objc_msgSend(v4, "setObject:forKey:", teamId, CFSTR("team_id"));
  signedKey = self->_signedKey;
  if ( signedKey )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[ModelKeyServerAPISignedKey dictionaryRepresentation](signedKey, "dictionaryRepresentation"));
    objc_msgSend(v4, "setObject:forKey:", v9, CFSTR("signed_key"));
    objc_release(v9);
  }
  rawKey = self->_rawKey;
  if ( rawKey )
  {
    v11 = objc_retainAutoreleasedReturnValue(-[ModelKeyServerAPIRawKey dictionaryRepresentation](rawKey, "dictionaryRepresentation"));
    objc_msgSend(v4, "setObject:forKey:", v11, CFSTR("raw_key"));
    objc_release(v11);
  }
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
  {
    key = self->_key;
    if ( (unsigned int)key >= 3 )
      v13 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("(unknown: %i)"),
                self->_key));
    else
      v13 = off_1000102F8[key];
    objc_msgSend(v4, "setObject:forKey:", v13, CFSTR("Key"));
    objc_release(v13);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}