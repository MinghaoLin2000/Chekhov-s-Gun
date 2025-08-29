+[AutofillNode nodesWithPlaylists:]
id __cdecl +[AutofillNode nodesWithPlaylists:](id a1, SEL a2, id a3)
{
  id v4; // x21
  void *v5; // x20
  void *v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v6 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  objc_msgSend(a1, "loadPlaylistNodes:playlistNodesLookup:forMediaKind:fromPlaylists:", v5, v6, 2LL, v4);
  objc_release(v4);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}