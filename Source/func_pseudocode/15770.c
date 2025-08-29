-[USBAudioAsset appendPayloadData:length:]
void __cdecl -[USBAudioAsset appendPayloadData:length:](USBAudioAsset *self, SEL a2, char *a3, unsigned int a4)
{
  -[NSMutableData appendBytes:length:](self->_payload, "appendBytes:length:", a3);
}