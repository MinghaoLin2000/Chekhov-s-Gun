-[ModelKeyServerAPISignedKey copyWithZone:]
id __cdecl -[ModelKeyServerAPISignedKey copyWithZone:](ModelKeyServerAPISignedKey *self, SEL a2, _NSZone *a3)
{
  _QWORD *v5; // x21
  void *v6; // x0
  void *v7; // x8

  v5 = objc_msgSend(objc_msgSend((id)objc_opt_class(self, a2), "allocWithZone:", a3), "init");
  v6 = -[NSData copyWithZone:](self->_data, "copyWithZone:", a3);
  v7 = (void *)v5[1];
  v5[1] = v6;
  objc_release(v7);
  return v5;
}