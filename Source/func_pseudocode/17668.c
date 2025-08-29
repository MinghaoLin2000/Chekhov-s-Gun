-[ModelKeyServerAPIFetchKeyResult isEqual:]
bool __cdecl -[ModelKeyServerAPIFetchKeyResult isEqual:](ModelKeyServerAPIFetchKeyResult *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x1
  NSString *keyId; // x0
  NSString *modelName; // x0
  NSString *teamId; // x0
  ModelKeyServerAPISignedKey *signedKey; // x0
  ModelKeyServerAPIRawKey *rawKey; // x0
  unsigned __int8 v11; // w20

  v4 = objc_retain(objc_retain(a3));
  if ( !(unsigned int)objc_msgSend(v4, "isMemberOfClass:", objc_opt_class(self, v5)) )
    goto LABEL_17;
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
  {
    if ( (*((_BYTE *)v4 + 56) & 1) == 0 || self->_key != *((_DWORD *)v4 + 2) )
      goto LABEL_17;
  }
  else if ( (*((_BYTE *)v4 + 56) & 1) != 0 )
  {
LABEL_17:
    v11 = 0;
    goto LABEL_18;
  }
  keyId = self->_keyId;
  if ( (unsigned __int64)keyId | *((_QWORD *)v4 + 2) && !(unsigned int)-[NSString isEqual:](keyId, "isEqual:") )
    goto LABEL_17;
  modelName = self->_modelName;
  if ( (unsigned __int64)modelName | *((_QWORD *)v4 + 3) )
  {
    if ( !(unsigned int)-[NSString isEqual:](modelName, "isEqual:") )
      goto LABEL_17;
  }
  teamId = self->_teamId;
  if ( (unsigned __int64)teamId | *((_QWORD *)v4 + 6) )
  {
    if ( !(unsigned int)-[NSString isEqual:](teamId, "isEqual:") )
      goto LABEL_17;
  }
  signedKey = self->_signedKey;
  if ( (unsigned __int64)signedKey | *((_QWORD *)v4 + 5) )
  {
    if ( !-[ModelKeyServerAPISignedKey isEqual:](signedKey, "isEqual:") )
      goto LABEL_17;
  }
  rawKey = self->_rawKey;
  if ( (unsigned __int64)rawKey | *((_QWORD *)v4 + 4) )
    v11 = -[ModelKeyServerAPIRawKey isEqual:](rawKey, "isEqual:");
  else
    v11 = 1;
LABEL_18:
  objc_release(v4);
  objc_release(v4);
  return v11;
}