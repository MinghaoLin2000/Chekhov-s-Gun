-[Browse_Entity browseInfo]
id __cdecl -[Browse_Entity browseInfo](Browse_Entity *self, SEL a2)
{
  id v3; // x21
  id v4; // x19
  id v5; // x20
  void *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_alloc((Class)&OBJC_CLASS___PKPrinterBrowseInfo);
  v4 = objc_retainAutoreleasedReturnValue(-[Browse_Entity bonjourName](self, "bonjourName"));
  v5 = objc_retainAutoreleasedReturnValue(-[Browse_Entity txtRecordDictionary](self, "txtRecordDictionary"));
  v6 = objc_msgSend(v3, "initWithBonjourName:txtRecord:", v4, v5);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}