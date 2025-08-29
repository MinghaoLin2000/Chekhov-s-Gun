-[DeviceMoreIdentifiersViewController clickSerialNumberPromptButton:]
void __cdecl -[DeviceMoreIdentifiersViewController clickSerialNumberPromptButton:](
        DeviceMoreIdentifiersViewController *self,
        SEL a2,
        id a3)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceMoreIdentifiersViewController setSerialNumberFieldDisplayType:](
    self,
    "setSerialNumberFieldDisplayType:",
    (char *)-[DeviceMoreIdentifiersViewController serialNumberFieldDisplayType](
              self,
              "serialNumberFieldDisplayType",
              a3)
  + 1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceMoreIdentifiersViewController updateSerialNumberFieldValues](self, "updateSerialNumberFieldValues");
}