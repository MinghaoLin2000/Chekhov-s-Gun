-[ModelKeyServerAPISignedKey writeTo:]
void __cdecl -[ModelKeyServerAPISignedKey writeTo:](ModelKeyServerAPISignedKey *self, SEL a2, id a3)
{
  NSData *data; // x1

  data = self->_data;
  if ( data )
    PBDataWriterWriteDataField(a3, data, 1LL);
}