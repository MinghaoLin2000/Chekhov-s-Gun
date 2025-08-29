-[TrackListViewController keyDown:]
void __cdecl -[TrackListViewController keyDown:](TrackListViewController *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x21
  void (**v6)(void); // x21
  objc_super v7; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v4, "keyCode") == 51 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[TrackListViewController deleteKeyHitAction](self, "deleteKeyHitAction"));
    objc_release(v5);
    if ( v5 )
    {
      v6 = (void (**)(void))objc_retainAutoreleasedReturnValue(-[TrackListViewController deleteKeyHitAction](self, "deleteKeyHitAction"));
      v6[2]();
      objc_release(v6);
    }
  }
  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___TrackListViewController;
  -[TrackListViewController keyDown:](&v7, "keyDown:", v4);
  objc_release(v4);
}