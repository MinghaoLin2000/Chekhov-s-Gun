-[CUPSBrowse_Entity setTXTRecordValue:forKey:]
void __cdecl -[CUPSBrowse_Entity setTXTRecordValue:forKey:](CUPSBrowse_Entity *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  void *v8; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = -[NSDictionary mutableCopy](self->_txt, "mutableCopy");
  objc_msgSend(v8, "setObject:forKeyedSubscript:", v6, v7);
  objc_storeStrong((id *)&self->_txt, v8);
  -[PKPrinterBonjourEndpoint setResolvedTXT:](self->_bonjourName, "setResolvedTXT:", v8);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}