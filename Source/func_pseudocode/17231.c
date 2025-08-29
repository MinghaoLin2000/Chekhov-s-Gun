-[AMLoaderServiceAction observeValueForKeyPath:ofObject:change:context:]
void __cdecl -[AMLoaderServiceAction observeValueForKeyPath:ofObject:change:context:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        void *a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x21
  objc_super v13; // [xsp+0h] [xbp-40h] BYREF

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  if ( off_100024020 == a6 )
  {
    -[AMLoaderServiceAction _progressChanged](self, "_progressChanged");
  }
  else if ( off_100024010 == a6 )
  {
    -[AMLoaderServiceAction _selectedInputTypeChanged](self, "_selectedInputTypeChanged");
  }
  else if ( off_100024018 == a6 )
  {
    -[AMLoaderServiceAction _selectedOutputTypeChanged](self, "_selectedOutputTypeChanged");
  }
  else
  {
    v13.receiver = self;
    v13.super_class = (Class)&OBJC_CLASS___AMLoaderServiceAction;
    -[AMLoaderServiceAction observeValueForKeyPath:ofObject:change:context:](
      &v13,
      "observeValueForKeyPath:ofObject:change:context:",
      v10,
      v11,
      v12,
      a6);
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}