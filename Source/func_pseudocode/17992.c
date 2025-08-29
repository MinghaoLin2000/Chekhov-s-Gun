-[PlugInLibraryService startUp:withReply:]
void __cdecl -[PlugInLibraryService startUp:withReply:](PlugInLibraryService *self, SEL a2, id a3, id a4)
{
  void (__fastcall **v5)(id, _QWORD, NSArray *); // x20
  NSArray *v6; // x0
  NSArray *supportedSchemes; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = (void (__fastcall **)(id, _QWORD, NSArray *))objc_retain(a4);
  v6 = (NSArray *)NetFSGetSupportedSchemes();
  supportedSchemes = self->_supportedSchemes;
  self->_supportedSchemes = v6;
  objc_release(supportedSchemes);
  v5[2](v5, 0LL, self->_supportedSchemes);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}