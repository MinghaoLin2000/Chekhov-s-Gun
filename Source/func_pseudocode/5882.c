-[MouseCloudSettingsMediator init]
MouseCloudSettingsMediator *__cdecl -[MouseCloudSettingsMediator init](MouseCloudSettingsMediator *self, SEL a2)
{
  MouseCloudSettingsMediator *v2; // x19
  MTMouseGesturesBackEnd *v3; // x20
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___MouseCloudSettingsMediator;
  v2 = -[MouseCloudSettingsMediator init](&v5, "init");
  if ( v2 )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[MTMouseGesturesBackEnd sharedInstance](&OBJC_CLASS___MTMouseGesturesBackEnd, "sharedInstance"));
    -[MouseCloudSettingsMediator setGestureEngine:](v2, "setGestureEngine:", v3);
    objc_release(v3);
  }
  return v2;
}