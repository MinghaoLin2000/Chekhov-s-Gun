_NetFS_CreateInterface
NetFSInterface *__cdecl NetFS_CreateInterface(CFUUIDRef factoryID, void *interfaceFTbl)
{
  NetFSInterface *v4; // x0
  NetFSInterface *v5; // x20

  v4 = (NetFSInterface *)malloc_type_calloc(1uLL, 0x18uLL, 0x10E0040191BE475uLL);
  v5 = v4;
  if ( v4 )
  {
    v4->_interface = interfaceFTbl;
    if ( factoryID )
    {
      v4->_factoryID = (CFUUIDRef)CFRetain(factoryID);
      CFPlugInAddInstanceForFactory(factoryID);
    }
    v5->_refCount = 1;
  }
  return v5;
}