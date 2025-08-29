-[ModelKeyServerAPISignedKey hash]
unsigned __int64 __cdecl -[ModelKeyServerAPISignedKey hash](ModelKeyServerAPISignedKey *self, SEL a2)
{
  return (unsigned __int64)-[NSData hash](self->_data, "hash");
}