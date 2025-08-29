-[ModelKeyServerAPIFetchKeyRequest copyWithZone:]
id __cdecl -[ModelKeyServerAPIFetchKeyRequest copyWithZone:](
        ModelKeyServerAPIFetchKeyRequest *self,
        SEL a2,
        _NSZone *a3)
{
  _QWORD *v5; // x20
  void *v6; // x0
  void *v7; // x8
  void *v8; // x0
  void *v9; // x8
  void *v10; // x0
  void *v11; // x8

  v5 = objc_msgSend(objc_msgSend((id)objc_opt_class(self, a2), "allocWithZone:", a3), "init");
  v6 = -[NSString copyWithZone:](self->_keyId, "copyWithZone:", a3);
  v7 = (void *)v5[1];
  v5[1] = v6;
  objc_release(v7);
  v8 = -[NSString copyWithZone:](self->_teamId, "copyWithZone:", a3);
  v9 = (void *)v5[3];
  v5[3] = v8;
  objc_release(v9);
  v10 = -[NSData copyWithZone:](self->_signedKeyRequest, "copyWithZone:", a3);
  v11 = (void *)v5[2];
  v5[2] = v10;
  objc_release(v11);
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
  {
    *((_BYTE *)v5 + 32) = self->_rawRequest;
    *((_BYTE *)v5 + 36) |= 1u;
  }
  return v5;
}