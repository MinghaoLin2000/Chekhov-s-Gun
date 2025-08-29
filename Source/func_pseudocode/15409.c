-[UARPUpdaterDisplayControllerDelegate assetAvailablityUpdateForAccessoryID:assetID:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate assetAvailablityUpdateForAccessoryID:assetID:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a4);
  objc_msgSend(v4, "downloadStatus");
  objc_msgSend(v4, "updateAvailabilityStatus");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}