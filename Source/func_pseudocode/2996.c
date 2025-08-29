-[ITLibPlaylist deviceSettingsNode]
id __cdecl -[ITLibPlaylist deviceSettingsNode](ITLibPlaylist *self, SEL a2)
{
  NSString *v3; // x21
  void *v4; // x22
  void *v5; // x23
  DeviceSettingsNode *v6; // x19
  NSNumber *v7; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[ITLibPlaylist name](self, "name"));
  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v5 = objc_retainAutoreleasedReturnValue(-[ITLibPlaylist persistentID](self, "persistentID"));
  v6 = objc_retainAutoreleasedReturnValue(
         +[DeviceSettingsNode nodeWithName:children:persistentID:](
           &OBJC_CLASS___DeviceSettingsNode,
           "nodeWithName:children:persistentID:",
           v3,
           v4,
           v5));
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v7 = objc_retainAutoreleasedReturnValue(-[ITLibPlaylist parentID](self, "parentID"));
  -[DeviceSettingsNode setParentID:](v6, "setParentID:", v7);
  objc_release(v7);
  if ( (void *)-[ITLibPlaylist kind](self, "kind") == (void *)3 )
  {
    -[DeviceSettingsNode setIsFolder:](v6, "setIsFolder:", 1LL);
  }
  else if ( (void *)-[ITLibPlaylist kind](self, "kind") == (void *)1 )
  {
    -[DeviceSettingsNode setIsSmartPlaylist:](v6, "setIsSmartPlaylist:", 1LL);
  }
  else if ( (void *)-[ITLibPlaylist kind](self, "kind") == (void *)2
         || (void *)-[ITLibPlaylist kind](self, "kind") == (void *)4 )
  {
    -[DeviceSettingsNode setIsGeniusPlaylist:](v6, "setIsGeniusPlaylist:", 1LL);
  }
  else if ( -[ITLibPlaylist kind](self, "kind") == ITLibPlaylistKindRegular )
  {
    -[DeviceSettingsNode setIsPlaylist:](v6, "setIsPlaylist:", 1LL);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}