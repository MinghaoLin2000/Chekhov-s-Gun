-[_NSAttributedStringAgentService listener:shouldAcceptNewConnection:]
bool __cdecl -[_NSAttributedStringAgentService listener:shouldAcceptNewConnection:](
        _NSAttributedStringAgentService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x21
  void *v5; // x19
  void *v6; // x20
  NSXPCInterface *v7; // x22
  _NSAttributedStringAgent *v8; // x23

  v4 = objc_retain(a4);
  v5 = objc_retainAutoreleasedReturnValue(+[NSAttributedString _allowedTokensClasses](&OBJC_CLASS___NSAttributedString, "_allowedTokensClasses"));
  v6 = objc_retainAutoreleasedReturnValue(+[NSAttributedString _allowedOptionClasses](&OBJC_CLASS___NSAttributedString, "_allowedOptionClasses"));
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL____NSAttributedStringAgentProtocol));
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v7,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v6,
    "renderHTML:options:extensionTokens:withReply:",
    1LL,
    0LL);
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v7,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v5,
    "renderHTML:options:extensionTokens:withReply:",
    2LL,
    0LL);
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v7,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v6,
    "renderHTML:options:extensionTokens:withReply:",
    0LL,
    1LL);
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v7,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v6,
    "readFromData:orFileURL:options:extensionTokens:withReply:",
    2LL,
    0LL);
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v7,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v5,
    "readFromData:orFileURL:options:extensionTokens:withReply:",
    3LL,
    0LL);
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v7,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v6,
    "readFromData:orFileURL:options:extensionTokens:withReply:",
    1LL,
    1LL);
  objc_msgSend(v4, "setExportedInterface:", v7);
  v8 = objc_opt_new(&OBJC_CLASS____NSAttributedStringAgent);
  objc_msgSend(v4, "setExportedObject:", v8);
  objc_msgSend(v4, "resume");
  objc_release(v4);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  return 1;
}