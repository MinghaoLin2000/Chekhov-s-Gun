-[DeviceSetupViewController viewWillDisappear]
void __cdecl -[DeviceSetupViewController viewWillDisappear](DeviceSetupViewController *self, SEL a2)
{
  WKWebView *v2; // x19
  WKWebViewConfiguration *v3; // x20
  WKUserContentController *v4; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationWebView](self, "activationWebView"));
  v3 = objc_retainAutoreleasedReturnValue(-[WKWebView configuration](v2, "configuration"));
  v4 = objc_retainAutoreleasedReturnValue(-[WKWebViewConfiguration userContentController](v3, "userContentController"));
  -[WKUserContentController removeScriptMessageHandlerForName:](
    v4,
    "removeScriptMessageHandlerForName:",
    CFSTR("iTunes_addProtocol"));
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}