-[UINSSystemPreferencesServiceViewController dealloc]
void __cdecl -[UINSSystemPreferencesServiceViewController dealloc](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2)
{
  id v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  if ( self->_isObserving )
  {
    v3 = objc_retainAutoreleasedReturnValue(
           +[UINSSystemPreferencesSettingsManager sharedManager](
             &OBJC_CLASS___UINSSystemPreferencesSettingsManager,
             "sharedManager"));
    objc_msgSend(v3, "removeObserver:forKeyPath:context:", self, CFSTR("settings"), off_100011A58);
    objc_release(v3);
  }
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___UINSSystemPreferencesServiceViewController;
  -[UINSSystemPreferencesServiceViewController dealloc](&v4, "dealloc");
}