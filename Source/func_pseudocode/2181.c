-[TrackListViewController setView:]
void __cdecl -[TrackListViewController setView:](TrackListViewController *self, SEL a2, id a3)
{
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___TrackListViewController;
  -[TrackListViewController setView:](&v4, "setView:", a3);
  -[TrackListViewController viewDidLoad](self, "viewDidLoad");
}