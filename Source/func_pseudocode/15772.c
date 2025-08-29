-[USBAudioAsset getNextCommandData:length:offset:]
bool __cdecl -[USBAudioAsset getNextCommandData:length:offset:](
        USBAudioAsset *self,
        SEL a2,
        char *a3,
        unsigned int a4,
        unsigned int *a5)
{
  NSUInteger v9; // x24
  NSUInteger v10; // x22

  v9 = self->_currentPayloadOffset + a4;
  v10 = -[NSMutableData length](self->_payload, "length");
  if ( v10 >= v9 )
  {
    *a5 = self->_currentPayloadOffset;
    -[NSMutableData getBytes:range:](self->_payload, "getBytes:range:", a3, self->_currentPayloadOffset, a4);
    self->_currentPayloadOffset += a4;
  }
  return v10 >= v9;
}