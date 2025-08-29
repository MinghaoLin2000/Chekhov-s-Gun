-[MouseCloudSettingsMediator scrollSpeedRaw]
id __cdecl -[MouseCloudSettingsMediator scrollSpeedRaw](MouseCloudSettingsMediator *self, SEL a2)
{
  MTMouseGesturesBackEnd *v2; // x19
  double v3; // d0
  double v4; // d8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[MouseCloudSettingsMediator gestureEngine](self, "gestureEngine"));
  -[MTMouseGesturesBackEnd scrollSpeedRaw](v2, "scrollSpeedRaw");
  v4 = v3;
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return +[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v4);
}