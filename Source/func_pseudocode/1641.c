-[DeviceFinderTabContainerViewController hasCloudIdentifierForIdentifier:]
bool __cdecl -[DeviceFinderTabContainerViewController hasCloudIdentifierForIdentifier:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  id v3; // x19
  unsigned __int8 v4; // w20

  v3 = objc_retain(a3);
  if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", CFSTR("Music")) & 1) != 0
    || ((unsigned int)objc_msgSend(v3, "isEqualToString:", CFSTR("Photos")) & 1) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = (unsigned __int8)objc_msgSend(v3, "isEqualToString:", CFSTR("Info"));
  }
  objc_release(v3);
  return v4;
}