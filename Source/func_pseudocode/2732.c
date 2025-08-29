+[DeviceSettingsNode nodeWithName:children:]
DeviceSettingsNode *__cdecl +[DeviceSettingsNode nodeWithName:children:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x19
  void *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "node"));
  objc_msgSend(v8, "setName:", v7);
  objc_release(v7);
  objc_msgSend(v8, "setChildren:", v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (DeviceSettingsNode *)objc_autoreleaseReturnValue(v8);
}