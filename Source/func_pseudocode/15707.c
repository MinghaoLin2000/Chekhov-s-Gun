-[UARPDFUUpdater disconnectUARPForUARPAccessory:]
bool __cdecl -[UARPDFUUpdater disconnectUARPForUARPAccessory:](UARPDFUUpdater *self, SEL a2, id a3)
{
  UARPController *uarpController; // x20
  id v5; // x21
  void *v6; // x22
  UARPController *v7; // x19
  void *v8; // x20

  uarpController = self->_uarpController;
  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "uarpAccessory"));
  -[UARPController accessoryUnreachable:](uarpController, "accessoryUnreachable:", v6);
  objc_release(v6);
  v7 = self->_uarpController;
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "uarpAccessory"));
  -[UARPController removeAccessory:](v7, "removeAccessory:", v8);
  objc_release(v8);
  objc_msgSend(v5, "disconnectUarpController");
  objc_release(v5);
  return 1;
}