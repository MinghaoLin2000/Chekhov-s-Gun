-[DeviceFinderTabContainerViewController hasErrorIdentifierForIdentifier:]
bool __cdecl -[DeviceFinderTabContainerViewController hasErrorIdentifierForIdentifier:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  return -[DeviceFinderTabContainerViewController mediaDomainForIdentifier:](self, "mediaDomainForIdentifier:", a3) != 0;
}