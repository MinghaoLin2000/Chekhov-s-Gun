-[ModelKeyServerAPIRawKey isEqual:]
bool __cdecl -[ModelKeyServerAPIRawKey isEqual:](ModelKeyServerAPIRawKey *self, SEL a2, id a3)
{
  _QWORD *v4; // x19
  __int64 v5; // x1
  NSData *encryptionKey; // x0
  NSData *encryptionIv; // x0
  unsigned __int8 v8; // w20

  v4 = objc_retain(objc_retain(a3));
  if ( (unsigned int)objc_msgSend(v4, "isMemberOfClass:", objc_opt_class(self, v5))
    && ((encryptionKey = self->_encryptionKey, !((unsigned __int64)encryptionKey | v4[2]))
     || (unsigned int)-[NSData isEqual:](encryptionKey, "isEqual:")) )
  {
    encryptionIv = self->_encryptionIv;
    if ( (unsigned __int64)encryptionIv | v4[1] )
      v8 = (unsigned __int8)-[NSData isEqual:](encryptionIv, "isEqual:");
    else
      v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  objc_release(v4);
  objc_release(v4);
  return v8;
}