-[DeviceFinderTabContainerViewController tabIdentifiers]
id __cdecl -[DeviceFinderTabContainerViewController tabIdentifiers](
        DeviceFinderTabContainerViewController *self,
        SEL a2)
{
  void *v3; // x19
  AMPDeviceInfo *v4; // x20
  unsigned int v5; // w21
  AMPDeviceInfo *v6; // x20
  AMPDeviceSyncPrefs *v7; // x21
  ITLibrary *v8; // x23
  ITLibrary *v9; // x24
  ITLibrary *v10; // x23
  ITLibrary *v11; // x24
  ITLibrary *v12; // x23
  ITLibrary *v13; // x22
  unsigned __int8 v15; // w25
  unsigned __int8 v16; // w24
  unsigned __int8 v17; // w25
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = (void *)objc_opt_new(&OBJC_CLASS___NSMutableArray, a2);
  objc_msgSend(v3, "addObject:", CFSTR("General"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v5 = (unsigned int)-[AMPDeviceInfo supportsFlashUIForShuffle](v4, "supportsFlashUIForShuffle");
  objc_release(v4);
  if ( v5 )
  {
    -[DeviceFinderTabContainerViewController hideButtonBar](self, "hideButtonBar");
    goto LABEL_43;
  }
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  objc_msgSend(v3, "addObject:", CFSTR("Music"));
  if ( (unsigned int)-[AMPDeviceInfo supportsMovies](v6, "supportsMovies")
    && ((unsigned int)-[AMPDeviceSyncPrefs disableMovies](v7, "disableMovies") & 1) == 0 )
  {
    objc_msgSend(v3, "addObject:", CFSTR("Movies"));
  }
  if ( (unsigned int)-[AMPDeviceInfo supportsTVShows](v6, "supportsTVShows")
    && ((unsigned int)-[AMPDeviceSyncPrefs disableTVShows](v7, "disableTVShows") & 1) == 0 )
  {
    objc_msgSend(v3, "addObject:", CFSTR("TVShows"));
  }
  if ( (unsigned int)-[AMPDeviceInfo supportsPodcasts](v6, "supportsPodcasts")
    && ((unsigned int)-[AMPDeviceSyncPrefs disablePodcasts](v7, "disablePodcasts") & 1) == 0 )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
    if ( -[ITLibrary isMediaDomainLoaded:](v8, "isMediaDomainLoaded:", 4LL) )
    {
      v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
      if ( !-[ITLibrary hasMediaItemsForMediaKinds:](v9, "hasMediaItemsForMediaKinds:", 16388LL)
        && ((unsigned int)-[AMPDeviceSyncPrefs hasSyncedPodcasts](v7, "hasSyncedPodcasts") & 1) == 0
        && ((unsigned int)-[AMPDeviceSyncPrefs hasDownloadedPodcasts](v7, "hasDownloadedPodcasts") & 1) == 0 )
      {
        if ( ((unsigned int)-[AMPDeviceSyncPrefs isHomePodcastLibrary](v7, "isHomePodcastLibrary") & 1) == 0 )
        {
          objc_release(v9);
          objc_release(v8);
          goto LABEL_18;
        }
        v17 = (unsigned __int8)-[AMPDeviceSyncPrefs updatePodcasts](v7, "updatePodcasts");
        objc_release(v9);
        objc_release(v8);
        if ( (v17 & 1) == 0 )
          goto LABEL_18;
        goto LABEL_17;
      }
      objc_release(v9);
    }
    objc_release(v8);
LABEL_17:
    objc_msgSend(v3, "addObject:", CFSTR("Podcasts"));
  }
LABEL_18:
  if ( (unsigned int)-[AMPDeviceInfo supportsAudiobooks](v6, "supportsAudiobooks")
    && ((unsigned int)-[AMPDeviceSyncPrefs disableAudiobooks](v7, "disableAudiobooks") & 1) == 0 )
  {
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
    if ( -[ITLibrary isMediaDomainLoaded:](v10, "isMediaDomainLoaded:", 8LL) )
    {
      v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
      if ( !-[ITLibrary hasMediaItemsForMediaKinds:](v11, "hasMediaItemsForMediaKinds:", 8LL)
        && !(unsigned int)-[AMPDeviceSyncPrefs hasSyncedAudiobooks](v7, "hasSyncedAudiobooks") )
      {
        v15 = (unsigned __int8)-[AMPDeviceSyncPrefs hasDownloadedAudiobooks](v7, "hasDownloadedAudiobooks");
        objc_release(v11);
        objc_release(v10);
        if ( (v15 & 1) == 0 )
          goto LABEL_26;
        goto LABEL_25;
      }
      objc_release(v11);
    }
    objc_release(v10);
LABEL_25:
    objc_msgSend(v3, "addObject:", CFSTR("Audiobooks"));
  }
LABEL_26:
  if ( !(unsigned int)-[AMPDeviceInfo supportsBooks](v6, "supportsBooks")
    || ((unsigned int)-[AMPDeviceSyncPrefs disableBooks](v7, "disableBooks") & 1) != 0 )
  {
    goto LABEL_34;
  }
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
  if ( -[ITLibrary isMediaDomainLoaded:](v12, "isMediaDomainLoaded:", 8LL) )
  {
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
    if ( !-[ITLibrary hasMediaItemsForMediaKinds:](v13, "hasMediaItemsForMediaKinds:", 98304LL)
      && !(unsigned int)-[AMPDeviceSyncPrefs hasSyncedBooks](v7, "hasSyncedBooks") )
    {
      v16 = (unsigned __int8)-[AMPDeviceSyncPrefs hasDownloadedBooks](v7, "hasDownloadedBooks");
      objc_release(v13);
      objc_release(v12);
      if ( (v16 & 1) == 0 )
        goto LABEL_34;
      goto LABEL_33;
    }
    objc_release(v13);
  }
  objc_release(v12);
LABEL_33:
  objc_msgSend(v3, "addObject:", CFSTR("Books"));
LABEL_34:
  if ( (unsigned int)-[AMPDeviceInfo supportsPhotos](v6, "supportsPhotos") )
    objc_msgSend(v3, "addObject:", CFSTR("Photos"));
  if ( (unsigned int)-[AMPDeviceInfo supportsFileSharing](v6, "supportsFileSharing")
    && ((unsigned int)-[AMPDeviceInfo disableFileSharing](v6, "disableFileSharing") & 1) == 0 )
  {
    objc_msgSend(v3, "addObject:", CFSTR("Files"));
  }
  if ( ((unsigned int)-[AMPDeviceInfo supportsContacts](v6, "supportsContacts") & 1) != 0
    || (unsigned int)-[AMPDeviceInfo supportsCalendars](v6, "supportsCalendars") )
  {
    objc_msgSend(v3, "addObject:", CFSTR("Info"));
  }
  objc_release(v7);
  objc_release(v6);
LABEL_43:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}