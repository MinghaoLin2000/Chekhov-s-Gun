-[FudPersonalizer dealloc]
void __cdecl -[FudPersonalizer dealloc](FudPersonalizer *self, SEL a2)
{
  dispatch_object_s *personalizationQueue; // x0
  __CFString *serverURL; // x0
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  personalizationQueue = (dispatch_object_s *)self->_personalizationQueue;
  if ( personalizationQueue )
    dispatch_release(personalizationQueue);
  -[FudPersonalizer freePersonalizationData](self, "freePersonalizationData");
  serverURL = self->_serverURL;
  if ( serverURL )
  {
    CFRelease(serverURL);
    self->_serverURL = 0LL;
  }
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___FudPersonalizer;
  -[FudPersonalizer dealloc](&v5, "dealloc");
}