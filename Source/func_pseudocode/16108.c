_IOCreatePlugInInterfaceForService
kern_return_t __cdecl IOCreatePlugInInterfaceForService(
        io_service_t service,
        CFUUIDRef pluginType,
        CFUUIDRef interfaceType,
        IOCFPlugInInterface ***theInterface,
        SInt32 *theScore)
{
  return _IOCreatePlugInInterfaceForService(service, pluginType, interfaceType, theInterface, theScore);
}