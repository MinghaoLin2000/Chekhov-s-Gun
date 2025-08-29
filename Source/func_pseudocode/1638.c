-[DeviceFinderTabContainerViewController mediaDomainForIdentifier:]
unsigned __int64 __cdecl -[DeviceFinderTabContainerViewController mediaDomainForIdentifier:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  id v3; // x19
  unsigned __int64 v4; // x20

  v3 = objc_retain(a3);
  if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", CFSTR("Music")) & 1) != 0 )
  {
    v4 = 1LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", CFSTR("Movies")) & 1) != 0
         || ((unsigned int)objc_msgSend(v3, "isEqualToString:", CFSTR("TVShows")) & 1) != 0 )
  {
    v4 = 2LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", CFSTR("Podcasts")) & 1) != 0 )
  {
    v4 = 4LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", CFSTR("Audiobooks")) & 1) != 0 )
  {
    v4 = 8LL;
  }
  else if ( (unsigned int)objc_msgSend(v3, "isEqualToString:", CFSTR("Books")) )
  {
    v4 = 8LL;
  }
  else
  {
    v4 = 0LL;
  }
  objc_release(v3);
  return v4;
}