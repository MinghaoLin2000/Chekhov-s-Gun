-[AMRemoteActionServiceViewController tearDownAction]
void __cdecl -[AMRemoteActionServiceViewController tearDownAction](AMRemoteActionServiceViewController *self, SEL a2)
{
  NSView *v3; // x20
  NSView *v4; // x20
  AMLoaderServiceAction *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amActionView](self, "_amActionView"));
  objc_release(v3);
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amActionView](self, "_amActionView"));
    -[NSView removeFromSuperview](v4, "removeFromSuperview");
    objc_release(v4);
    -[AMRemoteActionServiceViewController set_amActionView:](self, "set_amActionView:", 0LL);
  }
  v5 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _loaderServiceAction](self, "_loaderServiceAction"));
  -[AMLoaderServiceAction setServiceViewController:](v5, "setServiceViewController:", 0LL);
  objc_release(v5);
  -[AMRemoteActionServiceViewController set_loaderServiceAction:](self, "set_loaderServiceAction:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[AMRemoteActionServiceViewController set_amAction:](self, "set_amAction:", 0LL);
}