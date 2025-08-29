-[USBAudioAsset getNextCommandLength]
unsigned int __cdecl -[USBAudioAsset getNextCommandLength](USBAudioAsset *self, SEL a2)
{
  unsigned __int64 v3; // x20
  __int64 v5; // x3
  int v6; // [xsp+Ch] [xbp-14h] BYREF

  v3 = self->_currentPayloadOffset + 8LL;
  if ( v3 > -[NSMutableData length](self->_payload, "length") )
    return 0;
  v5 = self->_currentPayloadOffset + 4LL;
  v6 = 0;
  -[NSMutableData getBytes:range:](self->_payload, "getBytes:range:", &v6, v5, 4LL);
  return 4 * v6 + 8;
}