-[ModelKeyServerAPIRawKey hash]
unsigned __int64 __cdecl -[ModelKeyServerAPIRawKey hash](ModelKeyServerAPIRawKey *self, SEL a2)
{
  unsigned __int64 v3; // x20

  v3 = (unsigned __int64)-[NSData hash](self->_encryptionKey, "hash");
  return (unsigned __int64)-[NSData hash](self->_encryptionIv, "hash") ^ v3;
}