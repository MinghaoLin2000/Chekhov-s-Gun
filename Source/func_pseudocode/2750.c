-[DeviceSettingsNode matchesFilterNode:]
bool __cdecl -[DeviceSettingsNode matchesFilterNode:](DeviceSettingsNode *self, SEL a2, id a3)
{
  id v4; // x19
  NSString *v5; // x21
  void *v6; // x21
  NSString *v7; // x22
  unsigned __int8 v8; // w20

  v4 = objc_retain(a3);
  if ( -[DeviceSettingsNode matchesFilterTypeNode:](self, "matchesFilterTypeNode:", v4) )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode searchTerm](self, "searchTerm"));
    objc_release(v5);
    if ( v5 )
    {
      v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
      v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode searchTerm](self, "searchTerm"));
      v8 = (unsigned __int8)objc_msgSend(v6, "localizedStandardContainsString:", v7);
      objc_release(v7);
      objc_release(v6);
    }
    else
    {
      v8 = 1;
    }
  }
  else
  {
    v8 = 0;
  }
  objc_release(v4);
  return v8;
}