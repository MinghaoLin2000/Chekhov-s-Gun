-[DeviceSettingsTabContentOutlineView haveFolders]
bool __cdecl -[DeviceSettingsTabContentOutlineView haveFolders](DeviceSettingsTabContentOutlineView *self, SEL a2)
{
  __int64 v3; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  bool v6; // w25
  void *v7; // x23
  void *v8; // x24

  v3 = (__int64)-[DeviceSettingsTabContentOutlineView numberOfRows](self, "numberOfRows");
  if ( v3 < 1 )
  {
    return 0;
  }
  else
  {
    v4 = v3;
    v5 = 0LL;
    v6 = 1;
    do
    {
      v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView itemAtRow:](self, "itemAtRow:", v5));
      if ( (objc_opt_respondsToSelector() & 1) != 0 )
      {
        v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "children"));
        objc_release(v8);
        objc_release(v7);
        if ( v8 )
          return v6;
      }
      else
      {
        objc_release(v7);
      }
      v6 = ++v5 < v4;
    }
    while ( v4 != v5 );
  }
  return v6;
}