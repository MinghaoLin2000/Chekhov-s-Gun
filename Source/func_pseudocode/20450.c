-[PrinterToolServiceDelegate listener:shouldAcceptNewConnection:]
bool __cdecl -[PrinterToolServiceDelegate listener:shouldAcceptNewConnection:](
        PrinterToolServiceDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x19
  id v5; // x20
  PrintdRPCService *v6; // x20

  v4 = objc_retain(a4);
  v5 = objc_retainAutoreleasedReturnValue((id)getPrintdRPCProtocolInterface());
  objc_msgSend(v4, "setExportedInterface:", v5);
  objc_release(v5);
  v6 = -[PrintdRPCService initWithXPCConnection:](
         objc_alloc(&OBJC_CLASS___PrintdRPCService),
         "initWithXPCConnection:",
         v4);
  objc_msgSend(v4, "setExportedObject:", v6);
  objc_release(v6);
  objc_msgSend(v4, "activate");
  objc_release(v4);
  return 1;
}