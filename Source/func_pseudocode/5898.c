-[MouseCloudSettingsMediator setScrollSpeedRaw:]
void __cdecl -[MouseCloudSettingsMediator setScrollSpeedRaw:](MouseCloudSettingsMediator *self, SEL a2, id a3)
{
  id v4; // x20
  MTMouseGesturesBackEnd *v5; // x19
  double v6; // d0
  double v7; // d8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[MouseCloudSettingsMediator gestureEngine](self, "gestureEngine"));
  -[MTMouseGesturesBackEnd setShouldSyncChangesToCloud:](v5, "setShouldSyncChangesToCloud:", 0LL);
  objc_msgSend(v4, "doubleValue");
  v7 = v6;
  objc_release(v4);
  -[MTMouseGesturesBackEnd setScrollSpeedRaw:](v5, "setScrollSpeedRaw:", v7);
  -[MTMouseGesturesBackEnd setShouldSyncChangesToCloud:](v5, "setShouldSyncChangesToCloud:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}