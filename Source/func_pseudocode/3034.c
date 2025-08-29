-[DeviceSetupViewController loadWebView]
void __cdecl -[DeviceSetupViewController loadWebView](DeviceSetupViewController *self, SEL a2)
{
  void *v3; // x20
  WKWebView *v4; // x21
  WKWebViewConfiguration *v5; // x22
  WKUserContentController *v6; // x23
  WKWebView *v7; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___WKUserScript),
         "initWithSource:injectionTime:forMainFrameOnly:",
         CFSTR("window.iTunes = { addProtocol: (arg) => { window.webkit.messageHandlers.iTunes_addProtocol.postMessage(arg); } }"),
         0LL,
         0LL);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationWebView](self, "activationWebView"));
  v5 = objc_retainAutoreleasedReturnValue(-[WKWebView configuration](v4, "configuration"));
  v6 = objc_retainAutoreleasedReturnValue(-[WKWebViewConfiguration userContentController](v5, "userContentController"));
  -[WKUserContentController addUserScript:](v6, "addUserScript:", v3);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationWebView](self, "activationWebView"));
  -[WKWebView setNavigationDelegate:](v7, "setNavigationDelegate:", self);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}