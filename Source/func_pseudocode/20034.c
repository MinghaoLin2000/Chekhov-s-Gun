-[Browse_Bonjour cancel]
void __cdecl -[Browse_Bonjour cancel](Browse_Bonjour *self, SEL a2)
{
  void *v3; // x20
  NSMutableDictionary *serviceBrowsers; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allValues](self->_serviceBrowsers, "allValues"));
  objc_msgSend(v3, "enumerateObjectsUsingBlock:", &stru_10009E2D8);
  objc_release(v3);
  serviceBrowsers = self->_serviceBrowsers;
  self->_serviceBrowsers = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(serviceBrowsers);
}