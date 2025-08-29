_IOConnectCallStructMethod
kern_return_t __cdecl IOConnectCallStructMethod(
        mach_port_t connection,
        uint32_t selector,
        const void *inputStruct,
        size_t inputStructCnt,
        void *outputStruct,
        size_t *outputStructCnt)
{
  return _IOConnectCallStructMethod(connection, selector, inputStruct, inputStructCnt, outputStruct, outputStructCnt);
}