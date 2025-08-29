-[AutofillNode image]
NSImage *__cdecl -[AutofillNode image](AutofillNode *self, SEL a2)
{
  void *v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( -[AutofillNode isSmartPlaylist](self, "isSmartPlaylist") )
  {
    v3 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "smartPlaylistImage"));
  }
  else if ( -[AutofillNode isGeniusPlaylist](self, "isGeniusPlaylist") )
  {
    v3 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "geniusPlaylistImage"));
  }
  else if ( -[AutofillNode isFolder](self, "isFolder") )
  {
    v3 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "folderImage"));
  }
  else if ( -[AutofillNode isPlaylist](self, "isPlaylist") )
  {
    v3 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "playlistImage"));
  }
  else
  {
    v3 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSImage *)objc_autoreleaseReturnValue(v3);
}