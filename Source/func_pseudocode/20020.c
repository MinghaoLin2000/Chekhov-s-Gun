-[BonjourBrowse_Entity initWithBrowseResult:]
BonjourBrowse_Entity *__cdecl -[BonjourBrowse_Entity initWithBrowseResult:](BonjourBrowse_Entity *self, SEL a2, id a3)
{
  nw_browse_result *v5; // x19
  BonjourBrowse_Entity *v6; // x21
  nw_endpoint_t v7; // x0
  OS_nw_endpoint *endpoint; // x8
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF

  v5 = (nw_browse_result *)objc_retain(a3);
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___BonjourBrowse_Entity;
  v6 = -[BonjourBrowse_Entity init](&v10, "init");
  if ( v6 )
  {
    v7 = nw_browse_result_copy_endpoint(v5);
    endpoint = v6->_endpoint;
    v6->_endpoint = v7;
    objc_release(endpoint);
    objc_storeStrong((id *)&v6->_browseResult, a3);
  }
  objc_release(v5);
  return v6;
}