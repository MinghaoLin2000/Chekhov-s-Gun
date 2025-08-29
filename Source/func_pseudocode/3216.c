-[MediaPickerNode playlist]
ITLibPlaylist *__cdecl -[MediaPickerNode playlist](MediaPickerNode *self, SEL a2)
{
  unsigned __int64 v3; // x20
  ITLibrary *v4; // x19
  void *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = -[MediaPickerNode distinguishedPlaylistKind](self, "distinguishedPlaylistKind");
  v4 = objc_retainAutoreleasedReturnValue(-[MediaPickerNode itLibrary](self, "itLibrary"));
  v5 = objc_retainAutoreleasedReturnValue(-[ITLibrary playlistWithDistinguishedKind:](v4, "playlistWithDistinguishedKind:", v3));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (ITLibPlaylist *)objc_autoreleaseReturnValue(v5);
}