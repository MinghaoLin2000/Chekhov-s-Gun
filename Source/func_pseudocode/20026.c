-[BonjourBrowse_Entity bonjourName]
id __cdecl -[BonjourBrowse_Entity bonjourName](BonjourBrowse_Entity *self, SEL a2)
{
  id v3; // x20
  OS_nw_endpoint *endpoint; // x21
  id v5; // x19
  void *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_alloc((Class)&OBJC_CLASS___PKPrinterBonjourEndpoint);
  endpoint = self->_endpoint;
  v5 = objc_retainAutoreleasedReturnValue(-[BonjourBrowse_Entity serviceType](self, "serviceType"));
  v6 = objc_msgSend(v3, "initWithEndpoint:provenance:provenanceIdentifier:", endpoint, 4LL, v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}