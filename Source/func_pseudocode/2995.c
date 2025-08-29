-[ITLibMediaItem deviceSettingsNode]
id __cdecl -[ITLibMediaItem deviceSettingsNode](ITLibMediaItem *self, SEL a2)
{
  NSString *v3; // x21
  NSString *v4; // x22
  void *v5; // x23
  DeviceSettingsNode *v6; // x20
  ITLibArtist *v7; // x21
  NSString *v8; // x22
  ITLibArtist *v9; // x21
  NSString *v10; // x22
  NSDate *v11; // x21
  NSDate *v12; // x21
  void *v13; // x21
  ITLibMediaItemVideoInfo *v14; // x21
  ITLibMediaItemVideoInfo *v15; // x21
  NSNumber *v16; // x21
  ITLibAlbum *v17; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[ITLibMediaItem title](self, "title"));
  v4 = objc_retainAutoreleasedReturnValue(-[ITLibMediaItem sortTitle](self, "sortTitle"));
  v5 = objc_retainAutoreleasedReturnValue(-[ITLibMediaItem persistentID](self, "persistentID"));
  v6 = objc_retainAutoreleasedReturnValue(
         +[DeviceSettingsNode nodeWithName:sortName:persistentID:](
           &OBJC_CLASS___DeviceSettingsNode,
           "nodeWithName:sortName:persistentID:",
           v3,
           v4,
           v5));
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v7 = objc_retainAutoreleasedReturnValue(-[ITLibMediaItem artist](self, "artist"));
  v8 = objc_retainAutoreleasedReturnValue(-[ITLibArtist name](v7, "name"));
  -[DeviceSettingsNode setArtistName:](v6, "setArtistName:", v8);
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[ITLibMediaItem artist](self, "artist"));
  v10 = objc_retainAutoreleasedReturnValue(-[ITLibArtist sortName](v9, "sortName"));
  -[DeviceSettingsNode setSortArtistName:](v6, "setSortArtistName:", v10);
  objc_release(v10);
  objc_release(v9);
  -[DeviceSettingsNode setFilterType:](v6, "setFilterType:", 0LL);
  v11 = objc_retainAutoreleasedReturnValue(-[ITLibMediaItem releaseDate](self, "releaseDate"));
  -[DeviceSettingsNode setReleaseDate:](v6, "setReleaseDate:", v11);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[ITLibMediaItem addedDate](self, "addedDate"));
  -[DeviceSettingsNode setAddedDate:](v6, "setAddedDate:", v12);
  objc_release(v12);
  -[DeviceSettingsNode setPlayCount:](v6, "setPlayCount:", -[ITLibMediaItem playCount](self, "playCount"));
  v13 = objc_retainAutoreleasedReturnValue(-[ITLibMediaItem purchaseDate](self, "purchaseDate"));
  -[DeviceSettingsNode setPurchaseDate:](v6, "setPurchaseDate:", v13);
  objc_release(v13);
  v14 = objc_retainAutoreleasedReturnValue(-[ITLibMediaItem videoInfo](self, "videoInfo"));
  -[DeviceSettingsNode setVideoSeason:](v6, "setVideoSeason:", -[ITLibMediaItemVideoInfo season](v14, "season"));
  objc_release(v14);
  v15 = objc_retainAutoreleasedReturnValue(-[ITLibMediaItem videoInfo](self, "videoInfo"));
  -[DeviceSettingsNode setVideoEpisodeOrder:](
    v6,
    "setVideoEpisodeOrder:",
    -[ITLibMediaItemVideoInfo episodeOrder](v15, "episodeOrder"));
  objc_release(v15);
  -[DeviceSettingsNode setHasBeenPlayed:](
    v6,
    "setHasBeenPlayed:",
    (void *)-[ITLibMediaItem playStatus](self, "playStatus") != (void *)2);
  v16 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithUnsignedLongLong:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedLongLong:",
            -[ITLibMediaItem fileSize](self, "fileSize")));
  -[DeviceSettingsNode setFileSize:](v6, "setFileSize:", v16);
  objc_release(v16);
  v17 = objc_retainAutoreleasedReturnValue(-[ITLibMediaItem album](self, "album"));
  -[DeviceSettingsNode setDiscCount:](v6, "setDiscCount:", -[ITLibAlbum discCount](v17, "discCount"));
  -[DeviceSettingsNode setDiscNumber:](v6, "setDiscNumber:", -[ITLibAlbum discNumber](v17, "discNumber"));
  -[DeviceSettingsNode setTrackCount:](v6, "setTrackCount:", -[ITLibAlbum trackCount](v17, "trackCount"));
  -[DeviceSettingsNode setTrackNumber:](v6, "setTrackNumber:", -[ITLibMediaItem trackNumber](self, "trackNumber"));
  objc_release(v17);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}