-[ModelKeyServerAPISignedKey copyTo:]
void __cdecl -[ModelKeyServerAPISignedKey copyTo:](ModelKeyServerAPISignedKey *self, SEL a2, id a3)
{
  NSData *data; // x8

  data = self->_data;
  if ( data )
    objc_msgSend(a3, "setData:", data);
}