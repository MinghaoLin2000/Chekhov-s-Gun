-[MouseCloudSettingsMediator twoFingerSwipe]
id __cdecl -[MouseCloudSettingsMediator twoFingerSwipe](MouseCloudSettingsMediator *self, SEL a2)
{
  MTMouseGesturesBackEnd *v2; // x19
  void *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[MouseCloudSettingsMediator gestureEngine](self, "gestureEngine"));
  v3 = -[MTMouseGesturesBackEnd twoFingerSwipe](v2, "twoFingerSwipe");
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return +[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", v3);
}