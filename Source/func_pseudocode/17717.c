-[ModelKeyServerAPIFetchKeyRequest isEqual:]
bool __cdecl -[ModelKeyServerAPIFetchKeyRequest isEqual:](ModelKeyServerAPIFetchKeyRequest *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x1
  NSString *keyId; // x0
  NSString *teamId; // x0
  NSData *signedKeyRequest; // x0
  bool v9; // w21

  v4 = objc_retain(objc_retain(a3));
  if ( !(unsigned int)objc_msgSend(v4, "isMemberOfClass:", objc_opt_class(self, v5)) )
    goto LABEL_10;
  keyId = self->_keyId;
  if ( (unsigned __int64)keyId | *((_QWORD *)v4 + 1) )
  {
    if ( !(unsigned int)-[NSString isEqual:](keyId, "isEqual:") )
      goto LABEL_10;
  }
  teamId = self->_teamId;
  if ( (unsigned __int64)teamId | *((_QWORD *)v4 + 3) )
  {
    if ( !(unsigned int)-[NSString isEqual:](teamId, "isEqual:") )
      goto LABEL_10;
  }
  signedKeyRequest = self->_signedKeyRequest;
  if ( (unsigned __int64)signedKeyRequest | *((_QWORD *)v4 + 2) )
  {
    if ( !(unsigned int)-[NSData isEqual:](signedKeyRequest, "isEqual:") )
      goto LABEL_10;
  }
  v9 = (*((_BYTE *)v4 + 36) & 1) == 0;
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
  {
    if ( (*((_BYTE *)v4 + 36) & 1) == 0 )
    {
LABEL_10:
      v9 = 0;
      goto LABEL_11;
    }
    if ( self->_rawRequest )
    {
      if ( !*((_BYTE *)v4 + 32) )
        goto LABEL_10;
    }
    else if ( *((_BYTE *)v4 + 32) )
    {
      goto LABEL_10;
    }
    v9 = 1;
  }
LABEL_11:
  objc_release(v4);
  objc_release(v4);
  return v9;
}