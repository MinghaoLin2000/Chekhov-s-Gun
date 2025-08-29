-[DeviceMediaPickerViewController mediaPickerNodes]
NSArray *__cdecl -[DeviceMediaPickerViewController mediaPickerNodes](DeviceMediaPickerViewController *self, SEL a2)
{
  NSArray *mediaPickerNodes; // x0
  ITLibrary *v4; // x20
  NSArray *v5; // x21
  AMPDeviceInfo *v6; // x22
  unsigned int v7; // w23
  MediaPickerNode *v8; // x22
  AMPDeviceInfo *v9; // x22
  unsigned int v10; // w23
  MediaPickerNode *v11; // x22
  MediaPickerNode *v12; // x22
  AMPDeviceInfo *v13; // x22
  unsigned int v14; // w23
  MediaPickerNode *v15; // x22
  AMPDeviceInfo *v16; // x22
  unsigned int v17; // w23
  MediaPickerNode *v18; // x22
  AMPDeviceInfo *v19; // x22
  unsigned int v20; // w23
  MediaPickerNode *v21; // x22
  AMPDeviceInfo *v22; // x22
  unsigned int v23; // w23
  MediaPickerNode *v24; // x22
  NSArray *v25; // x0
  __int64 vars8; // [xsp+48h] [xbp+8h]

  mediaPickerNodes = self->_mediaPickerNodes;
  if ( !mediaPickerNodes )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
    v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v7 = (unsigned int)-[AMPDeviceInfo supportsMovies](v6, "supportsMovies");
    objc_release(v6);
    if ( v7 )
    {
      v8 = objc_retainAutoreleasedReturnValue(
             +[MediaPickerNode mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:](
               &OBJC_CLASS___MediaPickerNode,
               "mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:",
               CFSTR("Movies"),
               1LL,
               CFSTR("film"),
               v4));
      -[NSArray addObject:](v5, "addObject:", v8);
      objc_release(v8);
    }
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v10 = (unsigned int)-[AMPDeviceInfo supportsTVShows](v9, "supportsTVShows");
    objc_release(v9);
    if ( v10 )
    {
      v11 = objc_retainAutoreleasedReturnValue(
              +[MediaPickerNode mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:](
                &OBJC_CLASS___MediaPickerNode,
                "mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:",
                CFSTR("TV Shows"),
                2LL,
                CFSTR("tv"),
                v4));
      -[NSArray addObject:](v5, "addObject:", v11);
      objc_release(v11);
    }
    v12 = objc_retainAutoreleasedReturnValue(
            +[MediaPickerNode mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:](
              &OBJC_CLASS___MediaPickerNode,
              "mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:",
              CFSTR("Songs"),
              3LL,
              CFSTR("music"),
              v4));
    -[NSArray addObject:](v5, "addObject:", v12);
    objc_release(v12);
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v14 = (unsigned int)-[AMPDeviceInfo supportsPodcasts](v13, "supportsPodcasts");
    objc_release(v13);
    if ( v14 )
    {
      v15 = objc_retainAutoreleasedReturnValue(
              +[MediaPickerNode mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:](
                &OBJC_CLASS___MediaPickerNode,
                "mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:",
                CFSTR("Podcasts"),
                7LL,
                CFSTR("podcasts"),
                v4));
      -[NSArray addObject:](v5, "addObject:", v15);
      objc_release(v15);
    }
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v17 = (unsigned int)-[AMPDeviceInfo supportsAudiobooks](v16, "supportsAudiobooks");
    objc_release(v16);
    if ( v17 )
    {
      v18 = objc_retainAutoreleasedReturnValue(
              +[MediaPickerNode mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:](
                &OBJC_CLASS___MediaPickerNode,
                "mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:",
                CFSTR("Audiobooks"),
                4LL,
                CFSTR("headphones"),
                v4));
      -[NSArray addObject:](v5, "addObject:", v18);
      objc_release(v18);
    }
    v19 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v20 = (unsigned int)-[AMPDeviceInfo supportsBooks](v19, "supportsBooks");
    objc_release(v19);
    if ( v20 )
    {
      v21 = objc_retainAutoreleasedReturnValue(
              +[MediaPickerNode mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:](
                &OBJC_CLASS___MediaPickerNode,
                "mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:",
                CFSTR("Books"),
                1001LL,
                CFSTR("book"),
                v4));
      -[NSArray addObject:](v5, "addObject:", v21);
      objc_release(v21);
    }
    v22 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v23 = (unsigned int)-[AMPDeviceInfo supportsTones](v22, "supportsTones");
    objc_release(v22);
    if ( v23 )
    {
      v24 = objc_retainAutoreleasedReturnValue(
              +[MediaPickerNode mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:](
                &OBJC_CLASS___MediaPickerNode,
                "mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:",
                CFSTR("Tones"),
                5LL,
                CFSTR("bell"),
                v4));
      -[NSArray addObject:](v5, "addObject:", v24);
      objc_release(v24);
    }
    v25 = self->_mediaPickerNodes;
    self->_mediaPickerNodes = v5;
    objc_release(v25);
    objc_release(v4);
    mediaPickerNodes = self->_mediaPickerNodes;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(mediaPickerNodes);
}