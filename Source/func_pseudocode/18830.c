-[RemoteViewController setPreferredContentSize:]
// attributes: thunk
void __cdecl -[RemoteViewController setPreferredContentSize:](RemoteViewController *self, SEL a2, CGSize a3)
{
  -[RemoteViewController _remotePreferredSizeChanged:](self, "_remotePreferredSizeChanged:", a3.width, a3.height);
}