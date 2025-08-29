+[DeviceSettingsNode nodeWithName:children:persistentID:]
DeviceSettingsNode *__cdecl +[DeviceSettingsNode nodeWithName:children:persistentID:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x22
  id v9; // x19
  id v10; // x20
  void *v11; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v8 = objc_retain(a5);
  v9 = objc_retain(a4);
  v10 = objc_retain(a3);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "node"));
  objc_msgSend(v11, "setName:", v10);
  objc_release(v10);
  objc_msgSend(v11, "setChildren:", v9);
  objc_release(v9);
  objc_msgSend(v11, "setPersistentID:", v8);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (DeviceSettingsNode *)objc_autoreleaseReturnValue(v11);
}