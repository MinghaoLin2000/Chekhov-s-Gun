-[ModelKeyServerAPIRawKey copyWithZone:]
id __cdecl -[ModelKeyServerAPIRawKey copyWithZone:](ModelKeyServerAPIRawKey *self, SEL a2, _NSZone *a3)
{
  _QWORD *v5; // x21
  void *v6; // x0
  void *v7; // x8
  void *v8; // x0
  void *v9; // x8

  v5 = objc_msgSend(objc_msgSend((id)objc_opt_class(self, a2), "allocWithZone:", a3), "init");
  v6 = -[NSData copyWithZone:](self->_encryptionKey, "copyWithZone:", a3);
  v7 = (void *)v5[2];
  v5[2] = v6;
  objc_release(v7);
  v8 = -[NSData copyWithZone:](self->_encryptionIv, "copyWithZone:", a3);
  v9 = (void *)v5[1];
  v5[1] = v8;
  objc_release(v9);
  return v5;
}