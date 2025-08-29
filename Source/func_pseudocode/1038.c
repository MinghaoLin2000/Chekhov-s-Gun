-[DeviceStorageManagementViewController removeMesssageTextFormat]
id __cdecl -[DeviceStorageManagementViewController removeMesssageTextFormat](
        DeviceStorageManagementViewController *self,
        SEL a2)
{
  TrackListViewController *v3; // x21
  ITLibPlaylist *v4; // x22
  void *v5; // x20
  const __CFString *v6; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController trackListViewController](self, "trackListViewController"));
  v4 = objc_retainAutoreleasedReturnValue(-[TrackListViewController playlist](v3, "playlist"));
  v5 = -[ITLibPlaylist distinguishedKind](v4, "distinguishedKind");
  objc_release(v4);
  objc_release(v3);
  v6 = CFSTR("ConfirmDeleteSongsOnDevice %@");
  switch ( (unsigned __int64)v5 )
  {
    case 1uLL:
      v6 = CFSTR("ConfirmDeleteMoviesOnDevice %@");
      break;
    case 2uLL:
      v6 = CFSTR("ConfirmDeleteTVShowsOnDevice %@");
      break;
    case 3uLL:
      break;
    case 4uLL:
      v6 = CFSTR("ConfirmDeleteAudiobooksOnDevice %@");
      break;
    case 5uLL:
    case 6uLL:
      goto LABEL_5;
    case 7uLL:
      v6 = CFSTR("ConfirmDeletePodcastsOnDevice %@");
      break;
    default:
      if ( v5 == (void *)1001 )
        v6 = CFSTR("ConfirmDeleteBooksOnDevice %@");
      else
LABEL_5:
        v6 = CFSTR("ConfirmDeleteTracksOnDevice %@");
      break;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           v6);
}