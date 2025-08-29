+[RemoteViewBridgeServiceViewService registerViewServiceDelegate:]
void __cdecl +[RemoteViewBridgeServiceViewService registerViewServiceDelegate:](id a1, SEL a2, id a3)
{
  objc_storeWeak(&sServiceDelegate, a3);
}