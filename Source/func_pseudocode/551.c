-[DeviceSettingsDetailsTabContentViewController loadDetailsModelForNode:]
void __cdecl -[DeviceSettingsDetailsTabContentViewController loadDetailsModelForNode:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x21
  id v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  if ( v5 )
  {
    -[DeviceSettingsDetailsTabContentViewController setSourceNode:](self, "setSourceNode:", v4);
    v6 = objc_retainAutoreleasedReturnValue(
           -[DeviceSettingsDetailsTabContentViewController detailsNodeForSourceNode:](
             self,
             "detailsNodeForSourceNode:",
             v4));
    -[DeviceSettingsDetailsTabContentViewController setDetailsModel:](self, "setDetailsModel:", v6);
    objc_release(v6);
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}