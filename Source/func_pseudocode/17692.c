-[ModelKeyServerAPIFetchKeyResponse dictionaryRepresentation]
id __cdecl -[ModelKeyServerAPIFetchKeyResponse dictionaryRepresentation](
        ModelKeyServerAPIFetchKeyResponse *self,
        SEL a2)
{
  void *v3; // x19
  ModelKeyServerAPIFetchKeyResult *success; // x0
  id v5; // x21
  ModelKeyServerAPIResultError *error; // x0
  id v7; // x21
  __int64 v8; // x8
  __CFString *v9; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  success = self->_success;
  if ( success )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[ModelKeyServerAPIFetchKeyResult dictionaryRepresentation](success, "dictionaryRepresentation"));
    objc_msgSend(v3, "setObject:forKey:", v5, CFSTR("success"));
    objc_release(v5);
  }
  error = self->_error;
  if ( error )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[ModelKeyServerAPIResultError dictionaryRepresentation](error, "dictionaryRepresentation"));
    objc_msgSend(v3, "setObject:forKey:", v7, CFSTR("error"));
    objc_release(v7);
  }
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
  {
    v8 = self->_result;
    if ( (unsigned int)v8 >= 3 )
      v9 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithFormat:](
               &OBJC_CLASS___NSString,
               "stringWithFormat:",
               CFSTR("(unknown: %i)"),
               self->_result));
    else
      v9 = off_100010310[v8];
    objc_msgSend(v3, "setObject:forKey:", v9, CFSTR("Result"));
    objc_release(v9);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}