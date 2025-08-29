-[CGPDFServiceListener listener:shouldAcceptNewConnection:]
bool __cdecl -[CGPDFServiceListener listener:shouldAcceptNewConnection:](
        CGPDFServiceListener *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x20
  void *v5; // x19
  CGPDFService *v6; // x19

  v4 = objc_retain(a4);
  v5 = objc_retainAutoreleasedReturnValue(+[CGRemotePDFServiceProxy interface](&OBJC_CLASS___CGRemotePDFServiceProxy, "interface"));
  objc_msgSend(v4, "setExportedInterface:", v5);
  objc_release(v5);
  v6 = objc_opt_new(&OBJC_CLASS___CGPDFService);
  objc_msgSend(v4, "setExportedObject:", v6);
  objc_msgSend(v4, "resume");
  objc_release(v4);
  objc_release(v6);
  return 1;
}