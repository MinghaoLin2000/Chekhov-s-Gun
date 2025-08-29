-[NANBrowse_Entity hash]
unsigned __int64 __cdecl -[NANBrowse_Entity hash](NANBrowse_Entity *self, SEL a2)
{
  unsigned __int64 v3; // x20

  v3 = (unsigned __int64)-[PKPrinterBonjourEndpoint hash](self->_bonjourName, "hash");
  return (unsigned __int64)-[NSDictionary hash](self->_txt, "hash") ^ v3;
}