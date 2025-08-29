-[ITLibArtist deviceSettingsNode]
id __cdecl -[ITLibArtist deviceSettingsNode](ITLibArtist *self, SEL a2)
{
  NSString *v3; // x20
  NSString *v4; // x21
  NSString *v5; // x22
  NSNumber *v6; // x23
  DeviceSettingsNode *v7; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[ITLibArtist name](self, "name"));
  objc_release(v3);
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[ITLibArtist name](self, "name"));
    v5 = objc_retainAutoreleasedReturnValue(-[ITLibArtist sortName](self, "sortName"));
    v6 = objc_retainAutoreleasedReturnValue(-[ITLibArtist persistentID](self, "persistentID"));
    v7 = objc_retainAutoreleasedReturnValue(
           +[DeviceSettingsNode nodeWithName:sortName:persistentID:](
             &OBJC_CLASS___DeviceSettingsNode,
             "nodeWithName:sortName:persistentID:",
             v4,
             v5,
             v6));
    objc_release(v6);
    objc_release(v5);
    objc_release(v4);
  }
  else
  {
    v7 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}