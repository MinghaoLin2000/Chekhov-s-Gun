-[DeviceSettingsNode matchesFilterTypeNode:]
bool __cdecl -[DeviceSettingsNode matchesFilterTypeNode:](DeviceSettingsNode *self, SEL a2, id a3)
{
  id v4; // x19
  unsigned __int8 v5; // w0
  bool v6; // w20

  v4 = objc_retain(a3);
  if ( (void *)-[DeviceSettingsNode filterType](self, "filterType") == (void *)1 )
  {
    v5 = (unsigned __int8)objc_msgSend(v4, "isBookMediaKind");
  }
  else
  {
    if ( (void *)-[DeviceSettingsNode filterType](self, "filterType") != (void *)2 )
    {
      v6 = 1;
      goto LABEL_7;
    }
    v5 = (unsigned __int8)objc_msgSend(v4, "isPDFBookMediaKind");
  }
  v6 = v5;
LABEL_7:
  objc_release(v4);
  return v6;
}