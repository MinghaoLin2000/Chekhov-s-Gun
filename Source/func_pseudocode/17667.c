-[ModelKeyServerAPIFetchKeyResult copyWithZone:]
id __cdecl -[ModelKeyServerAPIFetchKeyResult copyWithZone:](ModelKeyServerAPIFetchKeyResult *self, SEL a2, _NSZone *a3)
{
  _QWORD *v5; // x0
  _QWORD *v6; // x21
  void *v7; // x0
  void *v8; // x8
  void *v9; // x0
  void *v10; // x8
  void *v11; // x0
  void *v12; // x8
  id v13; // x0
  void *v14; // x8
  id v15; // x0
  void *v16; // x8

  v5 = objc_msgSend(objc_msgSend((id)objc_opt_class(self, a2), "allocWithZone:", a3), "init");
  v6 = v5;
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
  {
    *((_DWORD *)v5 + 2) = self->_key;
    *((_BYTE *)v5 + 56) |= 1u;
  }
  v7 = -[NSString copyWithZone:](self->_keyId, "copyWithZone:", a3);
  v8 = (void *)v6[2];
  v6[2] = v7;
  objc_release(v8);
  v9 = -[NSString copyWithZone:](self->_modelName, "copyWithZone:", a3);
  v10 = (void *)v6[3];
  v6[3] = v9;
  objc_release(v10);
  v11 = -[NSString copyWithZone:](self->_teamId, "copyWithZone:", a3);
  v12 = (void *)v6[6];
  v6[6] = v11;
  objc_release(v12);
  v13 = -[ModelKeyServerAPISignedKey copyWithZone:](self->_signedKey, "copyWithZone:", a3);
  v14 = (void *)v6[5];
  v6[5] = v13;
  objc_release(v14);
  v15 = -[ModelKeyServerAPIRawKey copyWithZone:](self->_rawKey, "copyWithZone:", a3);
  v16 = (void *)v6[4];
  v6[4] = v15;
  objc_release(v16);
  return v6;
}