-[DeviceFinderTabContainerViewController hasErrorStateForIdentifier:]
bool __cdecl -[DeviceFinderTabContainerViewController hasErrorStateForIdentifier:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  unsigned __int64 v4; // x0
  unsigned __int64 v5; // x20
  ITLibrary *v6; // x21
  unsigned int v7; // w19

  v4 = -[DeviceFinderTabContainerViewController mediaDomainForIdentifier:](self, "mediaDomainForIdentifier:", a3);
  if ( v4 )
  {
    v5 = v4;
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
    v7 = !-[ITLibrary isMediaDomainLoaded:](v6, "isMediaDomainLoaded:", v5);
    objc_release(v6);
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  return v7;
}