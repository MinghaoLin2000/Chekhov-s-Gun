-[BonjourBrowse_Entity initWithEndpoint:]
BonjourBrowse_Entity *__cdecl -[BonjourBrowse_Entity initWithEndpoint:](BonjourBrowse_Entity *self, SEL a2, id a3)
{
  id v5; // x19
  BonjourBrowse_Entity *v6; // x0
  BonjourBrowse_Entity *v7; // x21
  OS_nw_browse_result *browseResult; // x0
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___BonjourBrowse_Entity;
  v6 = -[BonjourBrowse_Entity init](&v10, "init");
  v7 = v6;
  if ( v6 )
  {
    objc_storeStrong((id *)&v6->_endpoint, a3);
    browseResult = v7->_browseResult;
    v7->_browseResult = 0LL;
    objc_release(browseResult);
  }
  objc_release(v5);
  return v7;
}